from flask import Flask, render_template, redirect, url_for, request, g, session, abort, send_file
import os
import sqlite3
app = Flask(__name__)
app.config.update(dict(SECRET_KEY=os.urandom(16)))

def connect_db():
    db = sqlite3.connect("file:./source.sqlite3?mode=ro", uri=True)
    db.row_factory = sqlite3.Row
    return db

def get_db():
    if not hasattr(g, 'db'):
        g.db = connect_db()
    return g.db

@app.route("/", methods=['GET', 'POST'])
def login():
    if request.method == 'POST':
        if request.form['username'] == 'admin' and request.form['password'] == 'correct battery horse staple':
            session['logged_in'] = True
            return redirect(url_for('flag'))
        else:
            return redirect(url_for('login'))
    return render_template('login.html')

@app.route("/flag")
def flag():
    if not session.get('logged_in'):
        abort(401)
    return "Congratulations - the flag is: UiTHack18{credentials_in_html_for_testing_is_not_intelligent}"
