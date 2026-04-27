from flask import Flask, request, render_template

app = Flask(__name__)

@app.route('/')
def home():
    return render_template("name.html", title="Home Page", content="This is the home page of my website")

@app.route("/<name>")
def user(name):
    return render_template("name.html", title=f"{name}'s page", content=f"This is the individualized content for {name}")

@app.route('/test')
def testing():
    return render_template("name.html", title="Test Page", content="This is just a test to see if things work")


"""@app.route('/login', methods=['GET', 'POST'])
def hello_world():
    return "Hello World!"
def login():
    if request.method == 'POST':
        name = request.form['username']
        return f"Hello {name}!"
    return render_template('webdev/notespt2/FLASK/name.html')"""



if __name__ == '__main__':
    app.run()
    