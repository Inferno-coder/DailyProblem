from flask import Flask, render_template,request

app = Flask(__name__)
app.static_folder = 'static'
@app.route("/")
def home():
    return render_template("sample.html")
@app.route("/register",methods=["POST","GET"])
def index():
      if request.method=="POST":
        n=request.form.get("name")
        age=request.form.get("age")
        dept=request.form.get("dept")
        return render_template('res.html',name=n,age=age,dept=dept)
        #return render_template("sample.html")
if __name__ == '__main__':
    app.run(debug=True)
