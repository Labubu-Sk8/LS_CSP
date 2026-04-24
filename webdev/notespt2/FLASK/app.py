from flask import Flask, request, render_template

app = Flask(__name__)

@app.route('/')
def home():
    return "<p>Hello World</p>"

@app.route("/<name>")
def user(name):
    return f"Hello {name}"

"""@app.route('/test')
def testing():
    return "<p>This is a test</p>"

@app.route('/login', methods=['GET', 'POST'])
def hello_world():
    return "Hello World!"
def login():
    if request.method == 'POST':
        name = request.form['username']
        return f"Hello {name}!"
    return render_template('webdev/notespt2/FLASK/name.html')"""



if __name__ == '__main__':
    app.run()