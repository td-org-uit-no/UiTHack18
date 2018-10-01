from flask import Flask, render_template, redirect, url_for, request, g, session, abort, send_file
import os
import sqlite3
app = Flask(__name__)
app.config.update(dict(SECRET_KEY=os.urandom(16)))

@app.route("/")
def index():
    return render_template('index.html')

@app.route("/robots.txt")
def robots():
    return send_file('robots.txt')

@app.route("/.super_secret_file_that_will_not_be_indexed")
def flag():
    return "Congratulations - the flag is: UiTHack{robots_should_not_index_this_but_humans_are_not_disallowed}"
