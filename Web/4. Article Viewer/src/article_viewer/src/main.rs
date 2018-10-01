#![feature(plugin)]
#![plugin(rocket_codegen)]

extern crate rocket;

use rocket::response::Redirect;
use rocket::response::NamedFile;
use std::fs::File;
use std::io::prelude::*;

const ARTICLE_DIRECTORY: &str = "articles";

#[get("/article?<article>")]
fn display_article(article: &str) -> String {
    let article = article.replace("../", "");
    if let Ok(mut file) = File::open(format!("{}/{}", ARTICLE_DIRECTORY, article)) {
        let mut contents = String::new();
        if let Err(e) = file.read_to_string(&mut contents) {
            format!("Error reading file: {}", e)
        } else {
            format!("Displaying article {} contents:\n{}", article, contents)
        }
    } else {
        format!("Failed to display article {}, it does not exist", article)
    }
}

#[get("/articles")]
fn list_articles() -> NamedFile {
    NamedFile::open(format!("{}/article_list.html", ARTICLE_DIRECTORY)).unwrap()
}

#[get("/")]
fn index() -> Redirect {
    Redirect::to("/articles")
}

fn main() {
    rocket::ignite().mount("/", routes![index, display_article, list_articles]).launch();
}
