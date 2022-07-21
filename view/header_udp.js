        <li>

  success: function( result ) {

  return mvMatrix;

    highp vec3 ambientLight = vec3(0.6, 0.6, 0.6);





  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MIN_FILTER, gl.LINEAR_MIPMAP_NEAREST);

    highp vec4 transformedNormal = uNormalMatrix * vec4(aVertexNormal, 1.0);



  attribute highp vec3 aVertexNormal;

  hiddenBox.show();

  }

          <label htmlFor="new-todo">



export default function Color() {

}

    return (

      <h1>Hello world</h1>

    super(props);

  }

  multMatrix(m);

import { FormApp } from './FormApp';



}

  constructor(props) {

export default App;





  gl.texImage2D(gl.TEXTURE_2D, 0, gl.RGBA, gl.RGBA, gl.UNSIGNED_BYTE, image);

      xIncValue = -xIncValue;

          <label htmlFor="new-todo">

}

  render() {

    );

  },



    $( "#weather-temp" ).html( "<strong>" + result + "</strong> degrees" );



  <App />,

    return (

gl.uniformMatrix4fv(nUniform, false, new WebGLFloatArray(normalMatrix.flatten()));

  }

    }

class App extends Component {

  const gl = canvas.getContext("webgl");

  cubeImage.src = "cubetexture.png";

  constructor(props) {

    this.handleSubmit = this.handleSubmit.bind(this);

  uniform highp mat4 uNormalMatrix;

    return (



        <li>

    highp float directional = max(dot(transformedNormal.xyz, directionalVector), 0.0);

  if (!mvMatrixStack.length) {

function handleTextureLoaded(image, texture) {

  gl.bindTexture(gl.TEXTURE_2D, null);

  }

    highp vec3 directionalVector = vec3(0.85, 0.8, 0.75);

import { useRouter } from "next/router";

    mvMatrix = m.dup();

  success: function( result ) {

    vTextureCoord = aTextureCoord;

    vTextureCoord = aTextureCoord;

const About = () => {

  gl.clear(gl.COLOR_BUFFER_BIT);



  }

  attribute highp vec3 aVertexPosition;

      <h1>Hello world</h1>

  void main(void) {

  const router = useRouter();

    mvMatrix = m.dup();



}

    <h1>About Page</h1>

$( "#button-container button" ).on( "click", function( event ) {





    this.interval = setInterval(() => this.tick(), 1000);

var nUniform = gl.getUniformLocation(shaderProgram, "uNormalMatrix");

const About = () => {

  }

  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MIN_FILTER, gl.LINEAR_MIPMAP_NEAREST);

  attribute highp vec3 aVertexPosition;

  tick() {

        <TodoList items={this.state.items} />

}
    this.md = new Remarkable();

  }

            <a>About</a>

  return (

    <h1>About Page</h1>

      </ul>



    mvMatrix = m.dup();

  }

  return (

          <label htmlFor="new-todo">

  )



    }





  gl.clearColor(0.0, 0.0, 0.0, 1.0);

  var inRadians = angle * Math.PI / 180.0;



  gl.clearColor(0.0, 0.0, 0.0, 1.0);

);

const About = () => {

  uniform highp mat4 uMVMatrix;

class App extends Component {

import Link from "next/link";

}
  }





  render() {

    squareXOffset += xIncValue * ((30 * delta) / 1000.0);

}

class Timer extends React.Component {

    squareZOffset += zIncValue * ((30 * delta) / 1000.0);

  const canvas = document.querySelector("#glCanvas");

var normalMatrix = mvMatrix.inverse();

class MarkdownEditor extends React.Component {

  )

  var inRadians = angle * Math.PI / 180.0;

    this.setState(state => ({

    highp float directional = max(dot(transformedNormal.xyz, directionalVector), 0.0);

  if (gl === null) {



  cubeImage = new Image();

    highp vec3 directionalLightColor = vec3(0.5, 0.5, 0.75);

  if (m) {

  varying highp vec3 vLighting;

    mvMatrix = m.dup();

export default function Home() {

  gl.bindTexture(gl.TEXTURE_2D, null);



    return;

}

$( "#button-container button" ).on( "click", function( event ) {

      <h1>Hello world</h1>

}



  if (gl === null) {



    vTextureCoord = aTextureCoord;

            What needs to be done?



}

  varying highp vec2 vTextureCoord;

    mvMatrixStack.push(mvMatrix.dup());



  gl.generateMipmap(gl.TEXTURE_2D);

  hiddenBox.show();

      <ul>

    highp vec3 ambientLight = vec3(0.6, 0.6, 0.6);

export default About

  tick() {

class App extends Component {

  return <h1>商品{router.query.name}page</h1>;





  render() {

  varying highp vec2 vTextureCoord;



    vTextureCoord = aTextureCoord;





  componentDidMount() {

  attribute highp vec2 aTextureCoord;





function handleTextureLoaded(image, texture) {

    <div>



export default About

import Link from "next/link";

}

    super(props);

  varying highp vec2 vTextureCoord;

  }

  }

  if (m) {



  cubeImage.onload = function() { handleTextureLoaded(cubeImage, cubeTexture); }

}

function handleTextureLoaded(image, texture) {

      <FormApp />

}

            <a>About</a>

      <FormApp />



}

var nUniform = gl.getUniformLocation(shaderProgram, "uNormalMatrix");

  return mvMatrix;

  success: function( result ) {

}





  uniform highp mat4 uPMatrix;

  handleChange(e) {

  } else {

  cubeImage = new Image();



    </div>

  }

  return (

    squareYOffset += yIncValue * ((30 * delta) / 1000.0);

  mvMatrix = mvMatrixStack.pop();

export default function Home() {

    mvMatrixStack.push(mvMatrix.dup());



      zIncValue = -zIncValue;

    mvMatrix = m.dup();







    this.interval = setInterval(() => this.tick(), 1000);

    this.interval = setInterval(() => this.tick(), 1000);

    this.state = { value: 'Hello, **world**!' };





  cubeTexture = gl.createTexture();



  gl.texImage2D(gl.TEXTURE_2D, 0, gl.RGBA, gl.RGBA, gl.UNSIGNED_BYTE, image);

    squareYOffset += yIncValue * ((30 * delta) / 1000.0);

}

const About = () => {

    <h1>About Page</h1>

    this.setState(state => ({

function mvRotate(angle, v) {



export default function Color() {

  cubeImage = new Image();

function main() {

var normalMatrix = mvMatrix.inverse();

  var m = Matrix.Rotation(inRadians, $V([v[0], v[1], v[2]])).ensure4x4();

function handleTextureLoaded(image, texture) {







  void main(void) {

  constructor(props) {

            <a>About</a>



      </ul>

}



    <div>



    this.state = { value: 'Hello, **world**!' };

  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MIN_FILTER, gl.LINEAR_MIPMAP_NEAREST);

</script>

        <form onSubmit={this.handleSubmit}>

  url: "/api/getWeather",

);

  }



  return (

    }));

      <FormApp />

export default function Home() {

  }

// Arrow function

  return (

  return (

  attribute highp vec3 aVertexPosition;



  }

export default About



import { useRouter } from "next/router";



class TodoApp extends React.Component {

        <li>

  return <h1>商品{router.query.name}page</h1>;

}







});



  gl.generateMipmap(gl.TEXTURE_2D);



    <h1>About Page</h1>

    return (

    this.setState({ value: e.target.value });

    }

    );

  return (

}

  render() {

  document.getElementById('root')

    gl_Position = uPMatrix * uMVMatrix * vec4(aVertexPosition, 1.0);

  var m = Matrix.Rotation(inRadians, $V([v[0], v[1], v[2]])).ensure4x4();

  }

  constructor(props) {

    }



  document.getElementById('root')

class Timer extends React.Component {

          <Link href="/about">

      <h1>Hello Next.js</h1>



    return (

  render() {



  const gl = canvas.getContext("webgl");

  console.log(router.query)

    );

    if (Math.abs(squareYOffset) > 2.5) {



  constructor(props) {

  var inRadians = angle * Math.PI / 180.0;

  uniform highp mat4 uNormalMatrix;

  }



  }

  constructor(props) {

  gl.texImage2D(gl.TEXTURE_2D, 0, gl.RGBA, gl.RGBA, gl.UNSIGNED_BYTE, image);

    squareZOffset += zIncValue * ((30 * delta) / 1000.0);



    mvMatrixStack.push(m.dup());



  void main(void) {

$( "#button-container button" ).on( "click", function( event ) {

  return (



      </ul>

      <ul>

import { useRouter } from "next/router";

class Timer extends React.Component {

class MarkdownEditor extends React.Component {

    );

  hiddenBox.show();

      seconds: state.seconds + 1

  gl.bindTexture(gl.TEXTURE_2D, texture);

    this.handleSubmit = this.handleSubmit.bind(this);

  uniform highp mat4 uMVMatrix;

  const canvas = document.querySelector("#glCanvas");

  }

  constructor(props) {

    $( "#weather-temp" ).html( "<strong>" + result + "</strong> degrees" );



    return (

  }

        <TodoList items={this.state.items} />

import React, { Component } from 'react';



  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MIN_FILTER, gl.LINEAR_MIPMAP_NEAREST);

    super(props);

  gl.bindTexture(gl.TEXTURE_2D, texture);

          <Link href="/about">

  gl.generateMipmap(gl.TEXTURE_2D);

        <form onSubmit={this.handleSubmit}>

const About = () => {

  }

  return <h1>{router.query.name}の{router.query.color}color</h1>;

class App extends Component {

    this.handleChange = this.handleChange.bind(this);

  gl.bindTexture(gl.TEXTURE_2D, null);



    squareYOffset += yIncValue * ((30 * delta) / 1000.0);

import { useRouter } from "next/router";

normalMatrix = normalMatrix.transpose();





  }

  },

  constructor(props) {

}



  return <h1>商品{router.query.name}page</h1>;



    }));

  var m = Matrix.Rotation(inRadians, $V([v[0], v[1], v[2]])).ensure4x4();

  render() {

function mvPopMatrix() {



  gl.bindTexture(gl.TEXTURE_2D, texture);

  return (

  gl.clearColor(0.0, 0.0, 0.0, 1.0);

  const router = useRouter();

function About() {

      xIncValue = -xIncValue;



    super(props);

    gl_Position = uPMatrix * uMVMatrix * vec4(aVertexPosition, 1.0);

  constructor(props) {



  return mvMatrix;

    this.handleSubmit = this.handleSubmit.bind(this);

  gl.clear(gl.COLOR_BUFFER_BIT);

  }

);

  return (

    this.interval = setInterval(() => this.tick(), 1000);

    return (

// Arrow function

export default function Name() {

  url: "/api/getWeather",

}

function main() {

  return mvMatrix;

    squareYOffset += yIncValue * ((30 * delta) / 1000.0);

});









          </Link>

  data: {

function handleTextureLoaded(image, texture) {

  gl.clear(gl.COLOR_BUFFER_BIT);

);

      <ul>

const About = () => {

      seconds: state.seconds + 1

  varying highp vec2 vTextureCoord;

import Link from "next/link";

}

}

function mvPushMatrix(m) {

    squareYOffset += yIncValue * ((30 * delta) / 1000.0);





    squareZOffset += zIncValue * ((30 * delta) / 1000.0);

    mvMatrix = m.dup();

  }



export default function Color() {

function mvPushMatrix(m) {

          <Link href="/about">

export default function Name() {

  cubeImage.src = "cubetexture.png";

    );

}

var hiddenBox = $( "#banner-message" );

ReactDOM.render(



  var inRadians = angle * Math.PI / 180.0;



normalMatrix = normalMatrix.transpose();

    super(props);

    mvMatrixStack.push(m.dup());

    <h1>About Page</h1>

  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MAG_FILTER, gl.LINEAR);

}

$.ajax({

import Link from "next/link";

}

  attribute highp vec3 aVertexPosition;

    this.setState(state => ({

  attribute highp vec3 aVertexPosition;



  return <h1>商品{router.query.name}page</h1>;

      <ul>

  return (

  }

function About() {

}

var mvMatrixStack = [];

);



  render() {

    this.handleChange = this.handleChange.bind(this);





  }





            What needs to be done?

  const canvas = document.querySelector("#glCanvas");

  var m = Matrix.Rotation(inRadians, $V([v[0], v[1], v[2]])).ensure4x4();

<script id="shader-vs" type="x-shader/x-vertex">

    super(props);





  const canvas = document.querySelector("#glCanvas");

});

}

    );

ReactDOM.render(

</script>

    super(props);



  }

);



// Arrow function

  }



  gl.texImage2D(gl.TEXTURE_2D, 0, gl.RGBA, gl.RGBA, gl.UNSIGNED_BYTE, image);

export default function Home() {

  varying highp vec2 vTextureCoord;

    return;

function main() {

        </li>



    gl_Position = uPMatrix * uMVMatrix * vec4(aVertexPosition, 1.0);

      <h1>Hello world</h1>



function handleTextureLoaded(image, texture) {

  document.getElementById('root')

class MarkdownEditor extends React.Component {



function mvRotate(angle, v) {

  mvMatrix = mvMatrixStack.pop();

  const router = useRouter();

$.ajax({

  attribute highp vec3 aVertexNormal;

    }));

    </div>

    gl_Position = uPMatrix * uMVMatrix * vec4(aVertexPosition, 1.0);

    <h1>About Page</h1>

        </li>

  }

class MarkdownEditor extends React.Component {

function About() {



      <div>

    <h1>About Page</h1>

      <h1>Hello Next.js</h1>

    this.handleSubmit = this.handleSubmit.bind(this);



  hiddenBox.show();



        <h3>TODO</h3>

export default function Name() {

      <ul>

  url: "/api/getWeather",

function mvRotate(angle, v) {

  } else {

    this.state = { value: 'Hello, **world**!' };

class App extends Component {

  }

    );



  render() {



            <a>About</a>

  }

  return <h1>商品{router.query.name}page</h1>;

function mvRotate(angle, v) {

}

  cubeImage.onload = function() { handleTextureLoaded(cubeImage, cubeTexture); }



    this.md = new Remarkable();

  gl.clear(gl.COLOR_BUFFER_BIT);



  )

    <h1>About Page</h1>



const About = () => {



var nUniform = gl.getUniformLocation(shaderProgram, "uNormalMatrix");

  varying highp vec3 vLighting;

    return { __html: this.md.render(this.state.value) };

class App extends React.Component {

export default About

  getRawMarkup() {

gl.uniformMatrix4fv(nUniform, false, new WebGLFloatArray(normalMatrix.flatten()));

    super(props);

    mvMatrixStack.push(m.dup());

window.onload = main;

  uniform highp mat4 uPMatrix;

    }

  uniform highp mat4 uNormalMatrix;

  }

  const canvas = document.querySelector("#glCanvas");

}

}

  return mvMatrix;

        </li>

  url: "/api/getWeather",

            <a>About</a>

  render() {

  cubeImage.onload = function() { handleTextureLoaded(cubeImage, cubeTexture); }

  var m = Matrix.Rotation(inRadians, $V([v[0], v[1], v[2]])).ensure4x4();

    highp vec3 directionalVector = vec3(0.85, 0.8, 0.75);

  if (!mvMatrixStack.length) {



export default function Color() {

    highp vec4 transformedNormal = uNormalMatrix * vec4(aVertexNormal, 1.0);







  }

  if (m) {

    gl_Position = uPMatrix * uMVMatrix * vec4(aVertexPosition, 1.0);

    squareYOffset += yIncValue * ((30 * delta) / 1000.0);

  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MIN_FILTER, gl.LINEAR_MIPMAP_NEAREST);

import React, { Component } from 'react';

  url: "/api/getWeather",



    return (

export default App;

  constructor(props) {

      yIncValue = -yIncValue;

    squareYOffset += yIncValue * ((30 * delta) / 1000.0);

    vTextureCoord = aTextureCoord;



    mvMatrixStack.push(m.dup());

  gl.bindTexture(gl.TEXTURE_2D, null);

  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MIN_FILTER, gl.LINEAR_MIPMAP_NEAREST);

export default App;

        <form onSubmit={this.handleSubmit}>

  cubeImage.src = "cubetexture.png";

      </ul>

  gl.clearColor(0.0, 0.0, 0.0, 1.0);

      seconds: state.seconds + 1

  document.getElementById('root')

}

    }

function handleTextureLoaded(image, texture) {

  console.log(router.query)

      <h1>Hello world</h1>

    return (

    return;

  uniform highp mat4 uNormalMatrix;

$( "#button-container button" ).on( "click", function( event ) {



  attribute highp vec3 aVertexNormal;

    this.setState(state => ({

  }

  }

      zIncValue = -zIncValue;



  return <h1>{router.query.name}の{router.query.color}color</h1>;

  varying highp vec2 vTextureCoord;

class Timer extends React.Component {

  return mvMatrix;

  return (

$( "#button-container button" ).on( "click", function( event ) {



  multMatrix(m);

normalMatrix = normalMatrix.transpose();

    zipcode: 97201

  }

    super(props);

    $( "#weather-temp" ).html( "<strong>" + result + "</strong> degrees" );

    return (

    mvMatrix = m.dup();

export default function Name() {

</script>

  if (m) {

            What needs to be done?

      <div>

}
function handleTextureLoaded(image, texture) {

  getRawMarkup() {

  if (gl === null) {

  attribute highp vec3 aVertexNormal;



    );

          </Link>



var hiddenBox = $( "#banner-message" );

    highp vec3 directionalLightColor = vec3(0.5, 0.5, 0.75);

  uniform highp mat4 uNormalMatrix;

}

        <li>

import { FormApp } from './FormApp';

    return (

class App extends React.Component {

  return (

      <FormApp />

var normalMatrix = mvMatrix.inverse();

      </ul>

<script id="shader-vs" type="x-shader/x-vertex">



  }

  document.getElementById('root')



    return;



    this.handleChange = this.handleChange.bind(this);

export default function Home() {

  gl.generateMipmap(gl.TEXTURE_2D);

  if (m) {

class Timer extends React.Component {

  }

        </li>

  getRawMarkup() {

function mvRotate(angle, v) {

    }

  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MAG_FILTER, gl.LINEAR);

}

  if (!mvMatrixStack.length) {

    this.setState({ value: e.target.value });

}



  }

import Link from "next/link";

    <h1>About Page</h1>

  )



gl.uniformMatrix4fv(nUniform, false, new WebGLFloatArray(normalMatrix.flatten()));



        <h3>TODO</h3>

    </div>

  var m = Matrix.Rotation(inRadians, $V([v[0], v[1], v[2]])).ensure4x4();

});

  console.log(router.query)

  data: {

export default function Color() {

        <TodoList items={this.state.items} />

  uniform highp mat4 uPMatrix;

ReactDOM.render(

    highp vec3 directionalVector = vec3(0.85, 0.8, 0.75);

      <div>

    <div>



  uniform highp mat4 uNormalMatrix;

  }

    highp vec3 ambientLight = vec3(0.6, 0.6, 0.6);

    return (

ReactDOM.render(

  }

import { useRouter } from "next/router";



  multMatrix(m);

  }

});

    this.setState({ value: e.target.value });

  tick() {



    this.setState({ value: e.target.value });

normalMatrix = normalMatrix.transpose();

  const canvas = document.querySelector("#glCanvas");



  gl.texImage2D(gl.TEXTURE_2D, 0, gl.RGBA, gl.RGBA, gl.UNSIGNED_BYTE, image);

      <div>

    squareYOffset += yIncValue * ((30 * delta) / 1000.0);



  return (



  tick() {

class App extends React.Component {

        <form onSubmit={this.handleSubmit}>

    vTextureCoord = aTextureCoord;

        <form onSubmit={this.handleSubmit}>

    return (

    mvMatrixStack.push(m.dup());

    highp vec3 directionalVector = vec3(0.85, 0.8, 0.75);

  )

        <TodoList items={this.state.items} />

}

export default function Name() {

      <h1>Hello Next.js</h1>



  getRawMarkup() {

    this.handleSubmit = this.handleSubmit.bind(this);

  const router = useRouter();

    squareZOffset += zIncValue * ((30 * delta) / 1000.0);

  return <h1>{router.query.name}の{router.query.color}color</h1>;

    }));

  handleChange(e) {

    </div>

});

import { useRouter } from "next/router";

  cubeImage = new Image();

// Arrow function

    highp float directional = max(dot(transformedNormal.xyz, directionalVector), 0.0);

  }

    <div>

    vLighting = ambientLight + (directionalLightColor * directional);

  render() {

    super(props);

  handleChange(e) {



      yIncValue = -yIncValue;



export default function Color() {

    </div>

export default App;

    <div>



import Link from "next/link";



  const router = useRouter();

export default About

function main() {

import React, { Component } from 'react';



  if (gl === null) {

    );

export default function Home() {



  attribute highp vec3 aVertexNormal;



  }

import React, { Component } from 'react';

  }

}

  cubeImage = new Image();



      <h1>Hello world</h1>

  )

    highp vec4 transformedNormal = uNormalMatrix * vec4(aVertexNormal, 1.0);

function mvPopMatrix() {

  }

  if (m) {

            <a>About</a>

  return (

  mvMatrix = mvMatrixStack.pop();

    <h1>About Page</h1>

  tick() {

import { FormApp } from './FormApp';



}

  render() {

  }

$.ajax({

var mvMatrixStack = [];

  multMatrix(m);



    this.state = { seconds: 0 };

      xIncValue = -xIncValue;

    return (





      <ul>

        <h3>TODO</h3>

class App extends Component {

import Link from "next/link";

    mvMatrix = m.dup();

  attribute highp vec3 aVertexPosition;

  } else {





  cubeImage.src = "cubetexture.png";





    <h1>About Page</h1>

export default function Home() {





    return (

    this.interval = setInterval(() => this.tick(), 1000);

export default About

  }

import { useRouter } from "next/router";

    this.state = { value: 'Hello, **world**!' };

    this.state = { items: [], text: '' };

export default function Color() {

</script>



class App extends React.Component {

    mvMatrix = m.dup();

import { FormApp } from './FormApp';

            <a>About</a>

  gl.clearColor(0.0, 0.0, 0.0, 1.0);

  url: "/api/getWeather",

        <form onSubmit={this.handleSubmit}>

  gl.bindTexture(gl.TEXTURE_2D, texture);



    zipcode: 97201

  gl.clear(gl.COLOR_BUFFER_BIT);

  var inRadians = angle * Math.PI / 180.0;

  gl.bindTexture(gl.TEXTURE_2D, texture);

  }

}

const About = () => {

    <h1>About Page</h1>



    this.handleChange = this.handleChange.bind(this);

  multMatrix(m);

  componentDidMount() {

const About = () => {

  uniform highp mat4 uPMatrix;

    <h1>About Page</h1>

const About = () => {

    $( "#weather-temp" ).html( "<strong>" + result + "</strong> degrees" );

    $( "#weather-temp" ).html( "<strong>" + result + "</strong> degrees" );

    mvMatrixStack.push(m.dup());

  return (

class App extends Component {

  componentDidMount() {



    );

    return (

    squareZOffset += zIncValue * ((30 * delta) / 1000.0);



import { useRouter } from "next/router";



}

}

    vTextureCoord = aTextureCoord;

          </Link>

  );

  constructor(props) {

  const router = useRouter();

      <h1>Hello Next.js</h1>

function mvPushMatrix(m) {

);

}

  gl.clear(gl.COLOR_BUFFER_BIT);

  }

    this.handleChange = this.handleChange.bind(this);





import React, { Component } from 'react';

  attribute highp vec3 aVertexPosition;

  void main(void) {



          <Link href="/about">

        </li>

  return <h1>{router.query.name}の{router.query.color}color</h1>;



    $( "#weather-temp" ).html( "<strong>" + result + "</strong> degrees" );



  console.log(router.query)

    highp vec4 transformedNormal = uNormalMatrix * vec4(aVertexNormal, 1.0);

    this.setState({ value: e.target.value });



    vTextureCoord = aTextureCoord;

  uniform highp mat4 uNormalMatrix;



  attribute highp vec3 aVertexPosition;

  }

  }

function handleTextureLoaded(image, texture) {

    super(props);

    super(props);

function About() {

function mvPushMatrix(m) {

  multMatrix(m);

const About = () => {

    highp vec4 transformedNormal = uNormalMatrix * vec4(aVertexNormal, 1.0);

        </li>

  constructor(props) {

  data: {

    highp vec3 directionalLightColor = vec3(0.5, 0.5, 0.75);



  getRawMarkup() {

  gl.bindTexture(gl.TEXTURE_2D, texture);

    <div>

  varying highp vec2 vTextureCoord;

  multMatrix(m);

}

export default function Home() {



  gl.clearColor(0.0, 0.0, 0.0, 1.0);

function initTextures() {

import { useRouter } from "next/router";

    squareYOffset += yIncValue * ((30 * delta) / 1000.0);

        </li>

export default function Home() {

  gl.bindTexture(gl.TEXTURE_2D, texture);

}

function main() {



class Timer extends React.Component {



    mvMatrixStack.push(mvMatrix.dup());

  cubeTexture = gl.createTexture();

  );

  }

    <h1>About Page</h1>

function About() {

class TodoApp extends React.Component {

function mvPopMatrix() {

}

    gl_Position = uPMatrix * uMVMatrix * vec4(aVertexPosition, 1.0);

  tick() {

  }

function About() {

  return (

var hiddenBox = $( "#banner-message" );

    return { __html: this.md.render(this.state.value) };

  gl.bindTexture(gl.TEXTURE_2D, texture);

  var m = Matrix.Rotation(inRadians, $V([v[0], v[1], v[2]])).ensure4x4();



import { useRouter } from "next/router";

  return <h1>{router.query.name}の{router.query.color}color</h1>;



  }





          <label htmlFor="new-todo">

      <h1>Hello Next.js</h1>

class MarkdownEditor extends React.Component {

    this.handleChange = this.handleChange.bind(this);

export default function Home() {

    highp vec3 ambientLight = vec3(0.6, 0.6, 0.6);

  },

);

    gl_Position = uPMatrix * uMVMatrix * vec4(aVertexPosition, 1.0);

});

  varying highp vec3 vLighting;

          <Link href="/about">

  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MIN_FILTER, gl.LINEAR_MIPMAP_NEAREST);



normalMatrix = normalMatrix.transpose();

var normalMatrix = mvMatrix.inverse();



    <h1>About Page</h1>



var mvMatrixStack = [];

  }





    return (

      </ul>

            <a>About</a>

  const router = useRouter();



  componentDidMount() {

import React, { Component } from 'react';

export default function Color() {

    <h1>About Page</h1>

      seconds: state.seconds + 1

  const canvas = document.querySelector("#glCanvas");

  }





import { FormApp } from './FormApp';

  document.getElementById('root')



export default function Home() {

normalMatrix = normalMatrix.transpose();



  hiddenBox.show();

import { useRouter } from "next/router";

class App extends React.Component {

);

    highp vec3 directionalVector = vec3(0.85, 0.8, 0.75);

      seconds: state.seconds + 1

  gl.clearColor(0.0, 0.0, 0.0, 1.0);

  cubeImage.src = "cubetexture.png";

    return (

    this.state = { seconds: 0 };

      <div>

  }

    this.handleChange = this.handleChange.bind(this);

export default function Home() {

  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MIN_FILTER, gl.LINEAR_MIPMAP_NEAREST);

  if (gl === null) {





  componentDidMount() {

  }

  gl.generateMipmap(gl.TEXTURE_2D);

  var inRadians = angle * Math.PI / 180.0;

      yIncValue = -yIncValue;

      <ul>



ReactDOM.render(



    mvMatrixStack.push(mvMatrix.dup());





import { FormApp } from './FormApp';

}

    </div>

class App extends Component {

  attribute highp vec2 aTextureCoord;

  }

  }

}

  constructor(props) {



}

  gl.bindTexture(gl.TEXTURE_2D, texture);

  attribute highp vec2 aTextureCoord;

  return (

);

  return <h1>{router.query.name}の{router.query.color}color</h1>;

  <App />,

  if (gl === null) {

    this.interval = setInterval(() => this.tick(), 1000);

  }

    }));

  tick() {



  cubeTexture = gl.createTexture();

  }

export default function Color() {



  gl.texImage2D(gl.TEXTURE_2D, 0, gl.RGBA, gl.RGBA, gl.UNSIGNED_BYTE, image);



  gl.texImage2D(gl.TEXTURE_2D, 0, gl.RGBA, gl.RGBA, gl.UNSIGNED_BYTE, image);

      xIncValue = -xIncValue;

    return (

<script id="shader-vs" type="x-shader/x-vertex">

  var m = Matrix.Rotation(inRadians, $V([v[0], v[1], v[2]])).ensure4x4();

  cubeImage.src = "cubetexture.png";

  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MIN_FILTER, gl.LINEAR_MIPMAP_NEAREST);



      <h1>Hello Next.js</h1>



  getRawMarkup() {



}

  gl.clearColor(0.0, 0.0, 0.0, 1.0);

    $( "#weather-temp" ).html( "<strong>" + result + "</strong> degrees" );



    vTextureCoord = aTextureCoord;

  attribute highp vec2 aTextureCoord;

  if (m) {

}

        </li>



}
  }

    highp vec3 ambientLight = vec3(0.6, 0.6, 0.6);



  gl.bindTexture(gl.TEXTURE_2D, null);

  return (

    highp vec4 transformedNormal = uNormalMatrix * vec4(aVertexNormal, 1.0);



  tick() {

function mvPushMatrix(m) {

  }

    mvMatrix = m.dup();

  handleChange(e) {

  componentDidMount() {

    this.state = { value: 'Hello, **world**!' };

export default function Color() {

}

class App extends React.Component {

  data: {



class App extends React.Component {





  uniform highp mat4 uMVMatrix;

    this.state = { seconds: 0 };

  }





  if (!mvMatrixStack.length) {

      </ul>

  }

      seconds: state.seconds + 1

    vLighting = ambientLight + (directionalLightColor * directional);

    highp vec4 transformedNormal = uNormalMatrix * vec4(aVertexNormal, 1.0);

function mvPopMatrix() {

    }));

  gl.generateMipmap(gl.TEXTURE_2D);

  attribute highp vec3 aVertexNormal;

        <form onSubmit={this.handleSubmit}>

    highp vec3 directionalLightColor = vec3(0.5, 0.5, 0.75);

  cubeImage = new Image();

  }

  render() {

  hiddenBox.show();

    super(props);

    this.setState(state => ({

export default function Name() {

});

  if (!mvMatrixStack.length) {

}



  var m = Matrix.Rotation(inRadians, $V([v[0], v[1], v[2]])).ensure4x4();

function mvPopMatrix() {

  cubeImage.src = "cubetexture.png";

    }

  url: "/api/getWeather",

function About() {

  }

      <h1>Hello world</h1>

    }

      </ul>

  var inRadians = angle * Math.PI / 180.0;

    this.md = new Remarkable();

var nUniform = gl.getUniformLocation(shaderProgram, "uNormalMatrix");

function main() {

function handleTextureLoaded(image, texture) {

    squareYOffset += yIncValue * ((30 * delta) / 1000.0);

ReactDOM.render(

  uniform highp mat4 uMVMatrix;

function handleTextureLoaded(image, texture) {

  )

    }));

});

gl.uniformMatrix4fv(nUniform, false, new WebGLFloatArray(normalMatrix.flatten()));

    highp vec3 directionalLightColor = vec3(0.5, 0.5, 0.75);

    highp vec3 directionalLightColor = vec3(0.5, 0.5, 0.75);

import { FormApp } from './FormApp';

    this.handleChange = this.handleChange.bind(this);

    squareYOffset += yIncValue * ((30 * delta) / 1000.0);

    squareXOffset += xIncValue * ((30 * delta) / 1000.0);

export default function Home() {

  constructor(props) {

var mvMatrixStack = [];

}

  }



        <h3>TODO</h3>

  } else {

export default function Home() {

  constructor(props) {

          <Link href="/about">

      <div>



function mvPushMatrix(m) {

var hiddenBox = $( "#banner-message" );



  }

  }

  uniform highp mat4 uNormalMatrix;

  var m = Matrix.Rotation(inRadians, $V([v[0], v[1], v[2]])).ensure4x4();



var nUniform = gl.getUniformLocation(shaderProgram, "uNormalMatrix");

  gl.generateMipmap(gl.TEXTURE_2D);

  multMatrix(m);

    this.state = { value: 'Hello, **world**!' };

);





      <FormApp />

  cubeImage.src = "cubetexture.png";

  )





  const router = useRouter();

  gl.clear(gl.COLOR_BUFFER_BIT);

  componentDidMount() {

    return { __html: this.md.render(this.state.value) };



    gl_Position = uPMatrix * uMVMatrix * vec4(aVertexPosition, 1.0);

  }



    gl_Position = uPMatrix * uMVMatrix * vec4(aVertexPosition, 1.0);

  render() {

  hiddenBox.show();

import { useRouter } from "next/router";

}

  componentDidMount() {

            <a>About</a>

  mvMatrix = mvMatrixStack.pop();

  varying highp vec3 vLighting;

  void main(void) {





    super(props);

  return (

export default About

  hiddenBox.show();

  }

  );

    this.state = { items: [], text: '' };



      yIncValue = -yIncValue;

  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MAG_FILTER, gl.LINEAR);

export default App;

  success: function( result ) {

    );

class TodoApp extends React.Component {

  mvMatrix = mvMatrixStack.pop();

  handleChange(e) {

ReactDOM.render(



  const gl = canvas.getContext("webgl");

      yIncValue = -yIncValue;

  },

    vLighting = ambientLight + (directionalLightColor * directional);

  }

    this.state = { items: [], text: '' };

$( "#button-container button" ).on( "click", function( event ) {

function handleTextureLoaded(image, texture) {



    mvMatrix = m.dup();

  }

  const gl = canvas.getContext("webgl");

    );

}

  return (



  }

    this.handleSubmit = this.handleSubmit.bind(this);

$( "#button-container button" ).on( "click", function( event ) {

const About = () => {

  gl.clearColor(0.0, 0.0, 0.0, 1.0);



    squareXOffset += xIncValue * ((30 * delta) / 1000.0);

    }





  } else {

    </div>

export default function Color() {

    return (

  if (m) {

    $( "#weather-temp" ).html( "<strong>" + result + "</strong> degrees" );

  attribute highp vec3 aVertexNormal;

  getRawMarkup() {

var normalMatrix = mvMatrix.inverse();

function mvPopMatrix() {





  handleChange(e) {

  )

  )

    </div>

    squareXOffset += xIncValue * ((30 * delta) / 1000.0);

  }

  attribute highp vec3 aVertexPosition;

export default About

    <h1>About Page</h1>

  gl.generateMipmap(gl.TEXTURE_2D);

}

  constructor(props) {

    <h1>About Page</h1>

import React, { Component } from 'react';

  document.getElementById('root')

    <div>

    }));



    this.handleChange = this.handleChange.bind(this);



            <a>About</a>

  }



  hiddenBox.show();



    super(props);

import React, { Component } from 'react';

    highp vec3 ambientLight = vec3(0.6, 0.6, 0.6);

  <App />,

}

import { useRouter } from "next/router";

    highp float directional = max(dot(transformedNormal.xyz, directionalVector), 0.0);

  );

          <Link href="/about">

        <TodoList items={this.state.items} />

      <ul>

    return (

  console.log(router.query)

  multMatrix(m);

gl.uniformMatrix4fv(nUniform, false, new WebGLFloatArray(normalMatrix.flatten()));

  constructor(props) {

import React, { Component } from 'react';

  }



  attribute highp vec3 aVertexPosition;

        </li>

</script>

  getRawMarkup() {

export default function Home() {



  },

  )

class App extends Component {

  hiddenBox.show();

  if (!mvMatrixStack.length) {



  <App />,

    highp vec3 directionalLightColor = vec3(0.5, 0.5, 0.75);

    </div>

export default About



  cubeImage = new Image();

import Link from "next/link";

    gl_Position = uPMatrix * uMVMatrix * vec4(aVertexPosition, 1.0);





    vTextureCoord = aTextureCoord;

    this.interval = setInterval(() => this.tick(), 1000);

  }

    $( "#weather-temp" ).html( "<strong>" + result + "</strong> degrees" );

  }

      seconds: state.seconds + 1

  cubeImage = new Image();

  gl.bindTexture(gl.TEXTURE_2D, null);

  return mvMatrix;

    this.state = { items: [], text: '' };

    highp vec4 transformedNormal = uNormalMatrix * vec4(aVertexNormal, 1.0);

  varying highp vec2 vTextureCoord;

  componentDidMount() {

}

    return (

        <li>

    if (Math.abs(squareYOffset) > 2.5) {

  gl.generateMipmap(gl.TEXTURE_2D);



    mvMatrixStack.push(mvMatrix.dup());

}

  }

  constructor(props) {

    squareYOffset += yIncValue * ((30 * delta) / 1000.0);

class TodoApp extends React.Component {

    squareYOffset += yIncValue * ((30 * delta) / 1000.0);

}
  console.log(router.query)

}

  handleChange(e) {

  gl.texImage2D(gl.TEXTURE_2D, 0, gl.RGBA, gl.RGBA, gl.UNSIGNED_BYTE, image);

export default About

  }

  }

    this.handleChange = this.handleChange.bind(this);

  tick() {

export default function Color() {



    mvMatrix = m.dup();

    <h1>About Page</h1>

    if (Math.abs(squareYOffset) > 2.5) {

            <a>About</a>

});

}

  gl.clearColor(0.0, 0.0, 0.0, 1.0);

  url: "/api/getWeather",

      <ul>

}

        <TodoList items={this.state.items} />



    }

}

import { useRouter } from "next/router";

  }

}
import React, { Component } from 'react';

}



  }

  constructor(props) {

export default function Color() {

<script id="shader-vs" type="x-shader/x-vertex">

  return (

  }

var nUniform = gl.getUniformLocation(shaderProgram, "uNormalMatrix");

const About = () => {

  const gl = canvas.getContext("webgl");

        </li>





  hiddenBox.show();

gl.uniformMatrix4fv(nUniform, false, new WebGLFloatArray(normalMatrix.flatten()));



  );

  cubeImage.onload = function() { handleTextureLoaded(cubeImage, cubeTexture); }

import { useRouter } from "next/router";





import { FormApp } from './FormApp';

          </Link>

  cubeTexture = gl.createTexture();

    <h1>About Page</h1>





    return (





export default function Home() {

  )

    highp float directional = max(dot(transformedNormal.xyz, directionalVector), 0.0);

  }



        <TodoList items={this.state.items} />

  }

  }



  uniform highp mat4 uMVMatrix;

  gl.clearColor(0.0, 0.0, 0.0, 1.0);

  }



import React, { Component } from 'react';

      <h1>Hello Next.js</h1>





    this.handleChange = this.handleChange.bind(this);

  cubeTexture = gl.createTexture();

    </div>





  gl.bindTexture(gl.TEXTURE_2D, null);



    this.state = { value: 'Hello, **world**!' };





}

class MarkdownEditor extends React.Component {

  varying highp vec3 vLighting;

  }

    if (Math.abs(squareYOffset) > 2.5) {

    highp vec3 directionalLightColor = vec3(0.5, 0.5, 0.75);



  }



var mvMatrixStack = [];

  } else {

        <form onSubmit={this.handleSubmit}>

  void main(void) {

var normalMatrix = mvMatrix.inverse();

$( "#button-container button" ).on( "click", function( event ) {

}
  constructor(props) {

}

function main() {

    }

  render() {

  cubeImage.onload = function() { handleTextureLoaded(cubeImage, cubeTexture); }

}
export default function Name() {

}

      <h1>Hello Next.js</h1>



  }

  varying highp vec3 vLighting;

    zipcode: 97201

class App extends React.Component {

  return (

}

    this.interval = setInterval(() => this.tick(), 1000);

    }

    this.setState(state => ({

function main() {

}

  var m = Matrix.Rotation(inRadians, $V([v[0], v[1], v[2]])).ensure4x4();

export default App;

  cubeImage.src = "cubetexture.png";

class MarkdownEditor extends React.Component {

  uniform highp mat4 uNormalMatrix;

  const router = useRouter();



    return (



normalMatrix = normalMatrix.transpose();

});

class Timer extends React.Component {

    if (Math.abs(squareYOffset) > 2.5) {

      <h1>Hello world</h1>

    return (

    return (

    highp vec3 ambientLight = vec3(0.6, 0.6, 0.6);

  }

}

}

    super(props);

    if (Math.abs(squareYOffset) > 2.5) {



class App extends Component {

    return;



      <h1>Hello world</h1>

    }

  hiddenBox.show();

export default function Color() {

$( "#button-container button" ).on( "click", function( event ) {

  render() {

  uniform highp mat4 uMVMatrix;

  gl.clear(gl.COLOR_BUFFER_BIT);



  }

  const router = useRouter();



    this.state = { seconds: 0 };

          <label htmlFor="new-todo">

  if (m) {

  attribute highp vec3 aVertexNormal;

  const router = useRouter();

var hiddenBox = $( "#banner-message" );

        <li>

    super(props);

  data: {

  cubeImage = new Image();



  }

          <Link href="/about">

    this.handleChange = this.handleChange.bind(this);



  return (

function initTextures() {

    );

function mvRotate(angle, v) {

    vLighting = ambientLight + (directionalLightColor * directional);



  render() {

}

    this.handleChange = this.handleChange.bind(this);

  cubeImage.src = "cubetexture.png";



  const gl = canvas.getContext("webgl");

    this.state = { value: 'Hello, **world**!' };

}

    </div>

  }

    zipcode: 97201

  }

  gl.bindTexture(gl.TEXTURE_2D, texture);





function initTextures() {

    );

});

class App extends React.Component {

    if (Math.abs(squareYOffset) > 2.5) {

gl.uniformMatrix4fv(nUniform, false, new WebGLFloatArray(normalMatrix.flatten()));

export default About

    this.state = { value: 'Hello, **world**!' };



  }

    highp vec3 ambientLight = vec3(0.6, 0.6, 0.6);

    squareXOffset += xIncValue * ((30 * delta) / 1000.0);

    }));

    mvMatrix = m.dup();



import React, { Component } from 'react';

    zipcode: 97201



      </ul>



      <div>

  cubeTexture = gl.createTexture();

  render() {

const About = () => {

    mvMatrixStack.push(m.dup());



        <li>

  }

}

  cubeImage.src = "cubetexture.png";

  render() {

  }

  }

  uniform highp mat4 uMVMatrix;

export default function Color() {

});

    );

function About() {

    if (Math.abs(squareYOffset) > 2.5) {





        <li>

    squareXOffset += xIncValue * ((30 * delta) / 1000.0);

class App extends Component {





            What needs to be done?

    this.state = { value: 'Hello, **world**!' };

  handleChange(e) {

    }));

    highp float directional = max(dot(transformedNormal.xyz, directionalVector), 0.0);

  multMatrix(m);

  uniform highp mat4 uMVMatrix;

          <label htmlFor="new-todo">



});



  return (

    highp float directional = max(dot(transformedNormal.xyz, directionalVector), 0.0);





  gl.clear(gl.COLOR_BUFFER_BIT);

    vLighting = ambientLight + (directionalLightColor * directional);

  cubeImage = new Image();

}

  render() {

  const router = useRouter();



function handleTextureLoaded(image, texture) {

      seconds: state.seconds + 1

var normalMatrix = mvMatrix.inverse();

    this.state = { value: 'Hello, **world**!' };

  render() {



  render() {

var normalMatrix = mvMatrix.inverse();

  hiddenBox.show();



  attribute highp vec2 aTextureCoord;

<script id="shader-vs" type="x-shader/x-vertex">



  success: function( result ) {

  }

// Arrow function

  )

    <h1>About Page</h1>

}

  }

export default About





}



}
        <TodoList items={this.state.items} />

      <div>

  }

    squareYOffset += yIncValue * ((30 * delta) / 1000.0);

    super(props);

normalMatrix = normalMatrix.transpose();

  gl.generateMipmap(gl.TEXTURE_2D);

  }

    super(props);



  console.log(router.query)





    this.interval = setInterval(() => this.tick(), 1000);



<script id="shader-vs" type="x-shader/x-vertex">



function handleTextureLoaded(image, texture) {

  render() {

  attribute highp vec3 aVertexNormal;

      zIncValue = -zIncValue;



function main() {



  document.getElementById('root')



class App extends Component {

  success: function( result ) {

  var inRadians = angle * Math.PI / 180.0;

  return (

  }

    highp vec3 directionalVector = vec3(0.85, 0.8, 0.75);

    return { __html: this.md.render(this.state.value) };

  var m = Matrix.Rotation(inRadians, $V([v[0], v[1], v[2]])).ensure4x4();

}
    }

  cubeImage.src = "cubetexture.png";

  success: function( result ) {

  <App />,

  }

import { FormApp } from './FormApp';

  },

    highp float directional = max(dot(transformedNormal.xyz, directionalVector), 0.0);

  constructor(props) {

$.ajax({

    highp vec4 transformedNormal = uNormalMatrix * vec4(aVertexNormal, 1.0);

  }



  return (



          <Link href="/about">



    super(props);

  }

    this.md = new Remarkable();

    this.state = { items: [], text: '' };



  attribute highp vec3 aVertexPosition;

  )

  }

  var m = Matrix.Rotation(inRadians, $V([v[0], v[1], v[2]])).ensure4x4();



  }

    return (

          <Link href="/about">

          </Link>



    <div>



  }

$( "#button-container button" ).on( "click", function( event ) {



  render() {

    this.handleChange = this.handleChange.bind(this);

  varying highp vec3 vLighting;

$.ajax({

  }

    this.setState({ value: e.target.value });



});

  handleChange(e) {

  hiddenBox.show();

    mvMatrixStack.push(m.dup());

    this.handleChange = this.handleChange.bind(this);





      <div>

      </ul>

  return <h1>商品{router.query.name}page</h1>;

class TodoApp extends React.Component {

    </div>

  }

  gl.clear(gl.COLOR_BUFFER_BIT);

class App extends React.Component {

      </ul>

  tick() {

    squareXOffset += xIncValue * ((30 * delta) / 1000.0);

    gl_Position = uPMatrix * uMVMatrix * vec4(aVertexPosition, 1.0);

      </ul>

  } else {

    );

    this.state = { seconds: 0 };

  render() {

function mvRotate(angle, v) {



  }

  cubeTexture = gl.createTexture();

  }

import { FormApp } from './FormApp';

    super(props);

      <div>

  success: function( result ) {

  gl.bindTexture(gl.TEXTURE_2D, texture);

  );

gl.uniformMatrix4fv(nUniform, false, new WebGLFloatArray(normalMatrix.flatten()));

  }

      <ul>

  }

      <h1>Hello world</h1>

$.ajax({

    highp float directional = max(dot(transformedNormal.xyz, directionalVector), 0.0);

class App extends React.Component {

import Link from "next/link";

}

}

    super(props);

);

  handleChange(e) {

    this.interval = setInterval(() => this.tick(), 1000);



    this.state = { value: 'Hello, **world**!' };

    super(props);

    super(props);





    vTextureCoord = aTextureCoord;

  }

var hiddenBox = $( "#banner-message" );

        <TodoList items={this.state.items} />



  }

  );



    gl_Position = uPMatrix * uMVMatrix * vec4(aVertexPosition, 1.0);

            What needs to be done?

export default function Name() {

function mvPushMatrix(m) {

  return (





      <h1>Hello Next.js</h1>

    return { __html: this.md.render(this.state.value) };



          <label htmlFor="new-todo">

    this.state = { value: 'Hello, **world**!' };

export default App;



normalMatrix = normalMatrix.transpose();

    mvMatrixStack.push(mvMatrix.dup());

class App extends React.Component {

class App extends React.Component {



    squareXOffset += xIncValue * ((30 * delta) / 1000.0);

var hiddenBox = $( "#banner-message" );

  } else {

    mvMatrix = m.dup();

  <App />,



}

);

function mvPushMatrix(m) {

      seconds: state.seconds + 1

    return;

    highp vec3 ambientLight = vec3(0.6, 0.6, 0.6);



  <App />,

  const router = useRouter();

    this.handleChange = this.handleChange.bind(this);

  constructor(props) {

    squareZOffset += zIncValue * ((30 * delta) / 1000.0);

  }

    <h1>About Page</h1>

// Arrow function

import { useRouter } from "next/router";



    this.md = new Remarkable();

export default App;

}

    this.handleSubmit = this.handleSubmit.bind(this);

    highp vec3 ambientLight = vec3(0.6, 0.6, 0.6);

    squareZOffset += zIncValue * ((30 * delta) / 1000.0);

    super(props);

  cubeImage = new Image();

var nUniform = gl.getUniformLocation(shaderProgram, "uNormalMatrix");

      </ul>

  }

  }

      <div>

}

    zipcode: 97201

        <TodoList items={this.state.items} />

  return <h1>{router.query.name}の{router.query.color}color</h1>;

  gl.generateMipmap(gl.TEXTURE_2D);

  const gl = canvas.getContext("webgl");

    highp vec3 ambientLight = vec3(0.6, 0.6, 0.6);

  );

    highp vec3 ambientLight = vec3(0.6, 0.6, 0.6);

    squareZOffset += zIncValue * ((30 * delta) / 1000.0);

  console.log(router.query)

  const router = useRouter();

  hiddenBox.show();

  attribute highp vec2 aTextureCoord;

    return (



  } else {

    return { __html: this.md.render(this.state.value) };

  varying highp vec3 vLighting;



}



    return (

    $( "#weather-temp" ).html( "<strong>" + result + "</strong> degrees" );

export default About

  var inRadians = angle * Math.PI / 180.0;

  constructor(props) {

  const router = useRouter();



class App extends React.Component {

  var m = Matrix.Rotation(inRadians, $V([v[0], v[1], v[2]])).ensure4x4();

  render() {

  componentDidMount() {

const About = () => {

  void main(void) {



export default function Home() {

}



    <h1>About Page</h1>

    gl_Position = uPMatrix * uMVMatrix * vec4(aVertexPosition, 1.0);



            What needs to be done?

$( "#button-container button" ).on( "click", function( event ) {

    );

export default function Home() {

});

export default App;

var nUniform = gl.getUniformLocation(shaderProgram, "uNormalMatrix");

      zIncValue = -zIncValue;

  cubeImage = new Image();

  cubeTexture = gl.createTexture();



window.onload = main;

    );

  constructor(props) {

    vLighting = ambientLight + (directionalLightColor * directional);

          <label htmlFor="new-todo">



  constructor(props) {

  }

  }

}



      seconds: state.seconds + 1

        <form onSubmit={this.handleSubmit}>

  cubeImage.onload = function() { handleTextureLoaded(cubeImage, cubeTexture); }



}

    </div>

  cubeImage.src = "cubetexture.png";

    squareXOffset += xIncValue * ((30 * delta) / 1000.0);

  console.log(router.query)



      yIncValue = -yIncValue;

function main() {

  if (gl === null) {

  uniform highp mat4 uNormalMatrix;

    return (

import Link from "next/link";

normalMatrix = normalMatrix.transpose();



    return;

        <h3>TODO</h3>

class Timer extends React.Component {

    this.state = { value: 'Hello, **world**!' };

    );

    this.state = { value: 'Hello, **world**!' };

ReactDOM.render(

}

    </div>

    highp vec3 ambientLight = vec3(0.6, 0.6, 0.6);

  if (gl === null) {

    if (Math.abs(squareYOffset) > 2.5) {

  hiddenBox.show();

    mvMatrixStack.push(mvMatrix.dup());

function mvRotate(angle, v) {



  render() {

function main() {

var mvMatrixStack = [];

import { FormApp } from './FormApp';

  }

});



    super(props);

  }

  gl.texImage2D(gl.TEXTURE_2D, 0, gl.RGBA, gl.RGBA, gl.UNSIGNED_BYTE, image);

  render() {

function handleTextureLoaded(image, texture) {

}

  getRawMarkup() {

    this.interval = setInterval(() => this.tick(), 1000);

var hiddenBox = $( "#banner-message" );

      yIncValue = -yIncValue;

  );

var hiddenBox = $( "#banner-message" );



}

        <li>

import { useRouter } from "next/router";

}

    this.state = { value: 'Hello, **world**!' };

  )

    <div>

}
  if (m) {

    if (Math.abs(squareYOffset) > 2.5) {

function mvPushMatrix(m) {

  getRawMarkup() {



      zIncValue = -zIncValue;

function handleTextureLoaded(image, texture) {

  gl.bindTexture(gl.TEXTURE_2D, null);



  console.log(router.query)

export default function Home() {

}

    this.md = new Remarkable();

    this.state = { items: [], text: '' };



  <App />,

  }

import React, { Component } from 'react';

  attribute highp vec2 aTextureCoord;



var normalMatrix = mvMatrix.inverse();

    return (

      yIncValue = -yIncValue;

import { useRouter } from "next/router";

ReactDOM.render(

    }));

          </Link>

var nUniform = gl.getUniformLocation(shaderProgram, "uNormalMatrix");

});

function handleTextureLoaded(image, texture) {



  cubeImage = new Image();

}

  gl.texImage2D(gl.TEXTURE_2D, 0, gl.RGBA, gl.RGBA, gl.UNSIGNED_BYTE, image);

export default function Home() {

  attribute highp vec2 aTextureCoord;

  return <h1>商品{router.query.name}page</h1>;

    squareXOffset += xIncValue * ((30 * delta) / 1000.0);

function About() {



normalMatrix = normalMatrix.transpose();

  return (

function initTextures() {

  return mvMatrix;

}
import { useRouter } from "next/router";

  success: function( result ) {

  const gl = canvas.getContext("webgl");

  return (

    this.handleChange = this.handleChange.bind(this);



    highp vec4 transformedNormal = uNormalMatrix * vec4(aVertexNormal, 1.0);

  cubeImage = new Image();

            <a>About</a>

  }



    $( "#weather-temp" ).html( "<strong>" + result + "</strong> degrees" );



  gl.bindTexture(gl.TEXTURE_2D, null);

    return;

  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MAG_FILTER, gl.LINEAR);

  }

        <li>

  }

  }

    $( "#weather-temp" ).html( "<strong>" + result + "</strong> degrees" );

normalMatrix = normalMatrix.transpose();

            What needs to be done?

  const gl = canvas.getContext("webgl");

}

  const router = useRouter();

);

  }

    return (

function mvPushMatrix(m) {





  const gl = canvas.getContext("webgl");

var normalMatrix = mvMatrix.inverse();





export default About

    mvMatrix = m.dup();

  cubeImage.src = "cubetexture.png";

    squareXOffset += xIncValue * ((30 * delta) / 1000.0);

<script id="shader-vs" type="x-shader/x-vertex">



    highp vec3 ambientLight = vec3(0.6, 0.6, 0.6);

    );

    return;

    mvMatrixStack.push(m.dup());

    squareZOffset += zIncValue * ((30 * delta) / 1000.0);

            <a>About</a>



    vLighting = ambientLight + (directionalLightColor * directional);

  attribute highp vec3 aVertexPosition;

function mvRotate(angle, v) {

}

    );

  cubeImage.src = "cubetexture.png";

  attribute highp vec3 aVertexPosition;

gl.uniformMatrix4fv(nUniform, false, new WebGLFloatArray(normalMatrix.flatten()));





  void main(void) {

  var m = Matrix.Rotation(inRadians, $V([v[0], v[1], v[2]])).ensure4x4();

    }));

          <label htmlFor="new-todo">

var normalMatrix = mvMatrix.inverse();

  if (gl === null) {



            <a>About</a>

  gl.clearColor(0.0, 0.0, 0.0, 1.0);

import { useRouter } from "next/router";



  }

    $( "#weather-temp" ).html( "<strong>" + result + "</strong> degrees" );

}

}

}

      <div>

    super(props);

}



    highp vec3 ambientLight = vec3(0.6, 0.6, 0.6);

  attribute highp vec3 aVertexPosition;

    highp vec3 ambientLight = vec3(0.6, 0.6, 0.6);

  multMatrix(m);

  gl.texImage2D(gl.TEXTURE_2D, 0, gl.RGBA, gl.RGBA, gl.UNSIGNED_BYTE, image);



    );

    highp vec4 transformedNormal = uNormalMatrix * vec4(aVertexNormal, 1.0);

      <FormApp />

// Arrow function

  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MAG_FILTER, gl.LINEAR);

  cubeImage.src = "cubetexture.png";



  }

    this.setState(state => ({

        <li>

class TodoApp extends React.Component {

  return mvMatrix;



  cubeTexture = gl.createTexture();

  attribute highp vec3 aVertexNormal;

  return <h1>{router.query.name}の{router.query.color}color</h1>;

    );

  attribute highp vec3 aVertexNormal;

    gl_Position = uPMatrix * uMVMatrix * vec4(aVertexPosition, 1.0);

}

      seconds: state.seconds + 1

$( "#button-container button" ).on( "click", function( event ) {

    this.state = { items: [], text: '' };





  gl.bindTexture(gl.TEXTURE_2D, texture);

      <ul>



    );

    highp vec3 ambientLight = vec3(0.6, 0.6, 0.6);

import { useRouter } from "next/router";

}

    super(props);





    this.handleSubmit = this.handleSubmit.bind(this);

normalMatrix = normalMatrix.transpose();

  attribute highp vec3 aVertexPosition;

  tick() {

        <TodoList items={this.state.items} />

    squareXOffset += xIncValue * ((30 * delta) / 1000.0);

    return { __html: this.md.render(this.state.value) };

  hiddenBox.show();

ReactDOM.render(

}

    );



          <label htmlFor="new-todo">

    this.handleChange = this.handleChange.bind(this);

    this.md = new Remarkable();



  uniform highp mat4 uMVMatrix;

$( "#button-container button" ).on( "click", function( event ) {

    <h1>About Page</h1>

  componentDidMount() {

});



  }

  var m = Matrix.Rotation(inRadians, $V([v[0], v[1], v[2]])).ensure4x4();

    this.handleChange = this.handleChange.bind(this);

export default function Color() {

  } else {

gl.uniformMatrix4fv(nUniform, false, new WebGLFloatArray(normalMatrix.flatten()));

  gl.bindTexture(gl.TEXTURE_2D, texture);

class App extends Component {

      yIncValue = -yIncValue;

  }

  tick() {

  return <h1>商品{router.query.name}page</h1>;

      <div>



    this.interval = setInterval(() => this.tick(), 1000);



  handleChange(e) {

export default About

  }

  constructor(props) {

    return;

    <div>

    highp vec3 directionalVector = vec3(0.85, 0.8, 0.75);

      seconds: state.seconds + 1

      <ul>

  }

}

    this.handleChange = this.handleChange.bind(this);

function initTextures() {

  )

          <label htmlFor="new-todo">

  gl.clear(gl.COLOR_BUFFER_BIT);

    highp vec3 directionalLightColor = vec3(0.5, 0.5, 0.75);

}

});

  if (!mvMatrixStack.length) {

      <h1>Hello Next.js</h1>

  gl.texImage2D(gl.TEXTURE_2D, 0, gl.RGBA, gl.RGBA, gl.UNSIGNED_BYTE, image);

  getRawMarkup() {

      <ul>

    <div>

    $( "#weather-temp" ).html( "<strong>" + result + "</strong> degrees" );

}

  cubeImage.onload = function() { handleTextureLoaded(cubeImage, cubeTexture); }

  multMatrix(m);

    return;

  console.log(router.query)

  gl.clear(gl.COLOR_BUFFER_BIT);

    <h1>About Page</h1>

      <div>

function mvRotate(angle, v) {

  }

  hiddenBox.show();

      <FormApp />



  gl.clear(gl.COLOR_BUFFER_BIT);

  uniform highp mat4 uNormalMatrix;

  }

$.ajax({

  if (m) {

    $( "#weather-temp" ).html( "<strong>" + result + "</strong> degrees" );

  multMatrix(m);



  handleChange(e) {

    return;

function mvPushMatrix(m) {

var nUniform = gl.getUniformLocation(shaderProgram, "uNormalMatrix");



class TodoApp extends React.Component {

}

function About() {



import { FormApp } from './FormApp';

    highp vec3 ambientLight = vec3(0.6, 0.6, 0.6);

  );

      </ul>

}

    vTextureCoord = aTextureCoord;

  attribute highp vec3 aVertexPosition;

    squareYOffset += yIncValue * ((30 * delta) / 1000.0);

    <h1>About Page</h1>

        </li>



    highp vec3 ambientLight = vec3(0.6, 0.6, 0.6);

    <h1>About Page</h1>

  }

      xIncValue = -xIncValue;

});

      <FormApp />

  render() {



}

          </Link>

    this.interval = setInterval(() => this.tick(), 1000);

function main() {



        </li>

        <li>

  componentDidMount() {

  getRawMarkup() {

  multMatrix(m);



          <label htmlFor="new-todo">

  data: {

  var m = Matrix.Rotation(inRadians, $V([v[0], v[1], v[2]])).ensure4x4();



normalMatrix = normalMatrix.transpose();

        <h3>TODO</h3>

}

    if (Math.abs(squareYOffset) > 2.5) {









export default About



    }

        <TodoList items={this.state.items} />

}

  return (

  const router = useRouter();

$.ajax({

  if (gl === null) {

  attribute highp vec3 aVertexNormal;

  } else {

          </Link>



}





}

        <h3>TODO</h3>

  gl.clear(gl.COLOR_BUFFER_BIT);

    if (Math.abs(squareYOffset) > 2.5) {

    mvMatrixStack.push(m.dup());

function mvPopMatrix() {

          <Link href="/about">

    gl_Position = uPMatrix * uMVMatrix * vec4(aVertexPosition, 1.0);

import { useRouter } from "next/router";

          </Link>

        <li>

  return (

      <h1>Hello world</h1>

  varying highp vec2 vTextureCoord;

  return (

      <FormApp />

}

  }

  cubeImage.onload = function() { handleTextureLoaded(cubeImage, cubeTexture); }

function initTextures() {



    return (

function handleTextureLoaded(image, texture) {

        <li>

export default App;

    mvMatrixStack.push(m.dup());

  var inRadians = angle * Math.PI / 180.0;



import { FormApp } from './FormApp';

  cubeImage.onload = function() { handleTextureLoaded(cubeImage, cubeTexture); }

    this.interval = setInterval(() => this.tick(), 1000);

    }));



var hiddenBox = $( "#banner-message" );

class TodoApp extends React.Component {

  mvMatrix = mvMatrixStack.pop();

  }

      <div>

    gl_Position = uPMatrix * uMVMatrix * vec4(aVertexPosition, 1.0);

    highp vec4 transformedNormal = uNormalMatrix * vec4(aVertexNormal, 1.0);

}



  },



</script>



function mvPushMatrix(m) {

  multMatrix(m);

  }



    this.md = new Remarkable();

            <a>About</a>

    this.state = { value: 'Hello, **world**!' };

  getRawMarkup() {

    mvMatrixStack.push(mvMatrix.dup());

}
  }



class Timer extends React.Component {

    return { __html: this.md.render(this.state.value) };

}

  return (



      seconds: state.seconds + 1



  data: {

    this.handleChange = this.handleChange.bind(this);

    this.interval = setInterval(() => this.tick(), 1000);



  return (

  render() {

  render() {

    highp vec3 ambientLight = vec3(0.6, 0.6, 0.6);



}

    mvMatrixStack.push(m.dup());





  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MIN_FILTER, gl.LINEAR_MIPMAP_NEAREST);

  }

      <FormApp />

  attribute highp vec3 aVertexPosition;

var normalMatrix = mvMatrix.inverse();

  cubeImage = new Image();



}

  constructor(props) {

export default function Color() {

  }

  }

        <h3>TODO</h3>

  return <h1>{router.query.name}の{router.query.color}color</h1>;

    return;

import { useRouter } from "next/router";

  componentDidMount() {

var hiddenBox = $( "#banner-message" );

  attribute highp vec3 aVertexNormal;

  )

}

  return mvMatrix;



    mvMatrix = m.dup();

    );

  cubeImage = new Image();

  }

    return;



import { useRouter } from "next/router";

}

  }

  componentDidMount() {

  }

  }

  if (gl === null) {

  if (gl === null) {

    this.setState(state => ({

export default About

    squareYOffset += yIncValue * ((30 * delta) / 1000.0);

  attribute highp vec2 aTextureCoord;



<script id="shader-vs" type="x-shader/x-vertex">

    this.setState({ value: e.target.value });

    vTextureCoord = aTextureCoord;

  gl.generateMipmap(gl.TEXTURE_2D);



    this.handleSubmit = this.handleSubmit.bind(this);

      yIncValue = -yIncValue;



    super(props);

    if (Math.abs(squareYOffset) > 2.5) {



    if (Math.abs(squareYOffset) > 2.5) {

    highp vec3 directionalVector = vec3(0.85, 0.8, 0.75);

      yIncValue = -yIncValue;



  uniform highp mat4 uNormalMatrix;





    highp vec3 ambientLight = vec3(0.6, 0.6, 0.6);

    }

    this.state = { items: [], text: '' };

  <App />,



  return <h1>{router.query.name}の{router.query.color}color</h1>;

}



var normalMatrix = mvMatrix.inverse();

    if (Math.abs(squareYOffset) > 2.5) {

      seconds: state.seconds + 1

    this.interval = setInterval(() => this.tick(), 1000);



ReactDOM.render(



      </ul>

            <a>About</a>

    this.handleChange = this.handleChange.bind(this);

var nUniform = gl.getUniformLocation(shaderProgram, "uNormalMatrix");

import { useRouter } from "next/router";

export default function Home() {

  }

    }));





  cubeTexture = gl.createTexture();

  console.log(router.query)



normalMatrix = normalMatrix.transpose();

      </ul>

            What needs to be done?

  getRawMarkup() {

  render() {

export default About

});

  uniform highp mat4 uNormalMatrix;

    this.setState({ value: e.target.value });



      <FormApp />

export default About

    return (

  cubeImage.onload = function() { handleTextureLoaded(cubeImage, cubeTexture); }



  return (

  mvMatrix = mvMatrixStack.pop();

    this.state = { seconds: 0 };

export default App;

function initTextures() {



  handleChange(e) {

  gl.clear(gl.COLOR_BUFFER_BIT);



  }



  return mvMatrix;

    <h1>About Page</h1>

  }

export default About

  }

      <FormApp />

      xIncValue = -xIncValue;

    highp vec3 directionalVector = vec3(0.85, 0.8, 0.75);

  render() {

  gl.clearColor(0.0, 0.0, 0.0, 1.0);

      zIncValue = -zIncValue;

import { useRouter } from "next/router";



    this.md = new Remarkable();

const About = () => {

  }

  } else {

  componentDidMount() {

    <h1>About Page</h1>

  }

import Link from "next/link";

}

          </Link>

  return <h1>{router.query.name}の{router.query.color}color</h1>;

}

normalMatrix = normalMatrix.transpose();

class MarkdownEditor extends React.Component {

function main() {

  data: {

});

        <h3>TODO</h3>



    squareZOffset += zIncValue * ((30 * delta) / 1000.0);



    return (

class App extends React.Component {

        <li>

  render() {

<script id="shader-vs" type="x-shader/x-vertex">

  cubeImage = new Image();

    <h1>About Page</h1>



export default function Color() {

  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MAG_FILTER, gl.LINEAR);

            <a>About</a>



  document.getElementById('root')

  }



export default function Color() {





  }

}

            <a>About</a>

  }

}

  data: {



function handleTextureLoaded(image, texture) {



  const gl = canvas.getContext("webgl");

  var inRadians = angle * Math.PI / 180.0;

}

  varying highp vec3 vLighting;

var mvMatrixStack = [];

var hiddenBox = $( "#banner-message" );



  cubeImage = new Image();



});

  if (gl === null) {

  render() {

class App extends Component {

    highp vec3 directionalVector = vec3(0.85, 0.8, 0.75);





  }

window.onload = main;

  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MIN_FILTER, gl.LINEAR_MIPMAP_NEAREST);

        <h3>TODO</h3>

function About() {

export default function Color() {

    super(props);

    this.state = { value: 'Hello, **world**!' };

}

    highp vec4 transformedNormal = uNormalMatrix * vec4(aVertexNormal, 1.0);

</script>

  )

      seconds: state.seconds + 1



$.ajax({

  cubeImage = new Image();

    }));

    );

  return (

  <App />,

import { FormApp } from './FormApp';

  constructor(props) {

    this.handleSubmit = this.handleSubmit.bind(this);

  getRawMarkup() {

    super(props);

    highp vec3 directionalLightColor = vec3(0.5, 0.5, 0.75);

  }

class App extends Component {

  }

  const router = useRouter();

  cubeTexture = gl.createTexture();

    highp vec4 transformedNormal = uNormalMatrix * vec4(aVertexNormal, 1.0);

      <FormApp />

export default App;

  },

      <h1>Hello Next.js</h1>

    squareZOffset += zIncValue * ((30 * delta) / 1000.0);

  render() {

  }

    this.setState(state => ({

}

    this.handleSubmit = this.handleSubmit.bind(this);

$.ajax({

}



  render() {

  attribute highp vec3 aVertexPosition;

      zIncValue = -zIncValue;

function mvPopMatrix() {

  return (

    <div>

      <ul>

    );

      yIncValue = -yIncValue;

  return (



  getRawMarkup() {



  }

  const gl = canvas.getContext("webgl");

}



  },

  data: {

normalMatrix = normalMatrix.transpose();

    return (

    $( "#weather-temp" ).html( "<strong>" + result + "</strong> degrees" );

// Arrow function

    if (Math.abs(squareYOffset) > 2.5) {



  return <h1>{router.query.name}の{router.query.color}color</h1>;

    this.handleChange = this.handleChange.bind(this);

  data: {

  gl.bindTexture(gl.TEXTURE_2D, null);

    super(props);

  )

var mvMatrixStack = [];

    super(props);

class TodoApp extends React.Component {

    this.setState(state => ({

    return (



    return (

var normalMatrix = mvMatrix.inverse();

            What needs to be done?

    this.state = { items: [], text: '' };

  )

      <FormApp />

import { useRouter } from "next/router";

import React, { Component } from 'react';

    zipcode: 97201

  }

  return mvMatrix;



var hiddenBox = $( "#banner-message" );

  const router = useRouter();

class App extends Component {



  }

// Arrow function

  multMatrix(m);

      </ul>

  }

}

    highp vec3 directionalLightColor = vec3(0.5, 0.5, 0.75);



  return <h1>{router.query.name}の{router.query.color}color</h1>;



  document.getElementById('root')

    super(props);

    <div>

    this.state = { items: [], text: '' };

    highp float directional = max(dot(transformedNormal.xyz, directionalVector), 0.0);

        <li>



  gl.bindTexture(gl.TEXTURE_2D, texture);

      <h1>Hello world</h1>

    $( "#weather-temp" ).html( "<strong>" + result + "</strong> degrees" );

}



normalMatrix = normalMatrix.transpose();



  hiddenBox.show();

class MarkdownEditor extends React.Component {

  constructor(props) {

  )

  const canvas = document.querySelector("#glCanvas");

      seconds: state.seconds + 1

  const router = useRouter();

  uniform highp mat4 uNormalMatrix;

  constructor(props) {

      xIncValue = -xIncValue;



      yIncValue = -yIncValue;

  tick() {

}

    this.handleChange = this.handleChange.bind(this);

    <h1>About Page</h1>

  }

  gl.clear(gl.COLOR_BUFFER_BIT);





normalMatrix = normalMatrix.transpose();

  }

<script id="shader-vs" type="x-shader/x-vertex">



function initTextures() {

  var m = Matrix.Rotation(inRadians, $V([v[0], v[1], v[2]])).ensure4x4();

function mvRotate(angle, v) {

    squareXOffset += xIncValue * ((30 * delta) / 1000.0);



  render() {

    this.handleChange = this.handleChange.bind(this);

  multMatrix(m);

  }

    }

  return mvMatrix;

import Link from "next/link";



// Arrow function

  mvMatrix = mvMatrixStack.pop();

    vLighting = ambientLight + (directionalLightColor * directional);

  }

    this.interval = setInterval(() => this.tick(), 1000);







    mvMatrix = m.dup();

  componentDidMount() {

  cubeImage.onload = function() { handleTextureLoaded(cubeImage, cubeTexture); }

  gl.bindTexture(gl.TEXTURE_2D, texture);

<script id="shader-vs" type="x-shader/x-vertex">

    }));

    }));

  const router = useRouter();

  <App />,

    <h1>About Page</h1>

  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MIN_FILTER, gl.LINEAR_MIPMAP_NEAREST);

    );

  tick() {

  getRawMarkup() {

  render() {

    </div>

function About() {



    highp vec3 directionalLightColor = vec3(0.5, 0.5, 0.75);

    this.setState({ value: e.target.value });

  attribute highp vec3 aVertexNormal;

    this.setState(state => ({

export default App;

  }



      <ul>

  return mvMatrix;

  return <h1>{router.query.name}の{router.query.color}color</h1>;



    highp float directional = max(dot(transformedNormal.xyz, directionalVector), 0.0);

  return (







  cubeImage = new Image();

    return (

}

    highp vec3 directionalVector = vec3(0.85, 0.8, 0.75);



export default About



}

  }

    highp vec3 directionalLightColor = vec3(0.5, 0.5, 0.75);

  )

    squareYOffset += yIncValue * ((30 * delta) / 1000.0);

    mvMatrixStack.push(mvMatrix.dup());

  }

  console.log(router.query)

class Timer extends React.Component {

function mvPushMatrix(m) {

function mvRotate(angle, v) {

  gl.clearColor(0.0, 0.0, 0.0, 1.0);

  attribute highp vec2 aTextureCoord;

    );



    highp vec3 ambientLight = vec3(0.6, 0.6, 0.6);



  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MIN_FILTER, gl.LINEAR_MIPMAP_NEAREST);

  gl.bindTexture(gl.TEXTURE_2D, null);

    this.state = { value: 'Hello, **world**!' };

    if (Math.abs(squareYOffset) > 2.5) {

      <FormApp />

  void main(void) {



function handleTextureLoaded(image, texture) {

    highp vec3 directionalVector = vec3(0.85, 0.8, 0.75);

  }

  }

  multMatrix(m);

  return (

  componentDidMount() {

    this.handleSubmit = this.handleSubmit.bind(this);

    }));

  const router = useRouter();





}

}
  uniform highp mat4 uNormalMatrix;

export default About

  } else {



  }

import { FormApp } from './FormApp';

    this.handleChange = this.handleChange.bind(this);

  gl.generateMipmap(gl.TEXTURE_2D);

function About() {



}

          </Link>

    squareZOffset += zIncValue * ((30 * delta) / 1000.0);

class Timer extends React.Component {







  )

  }

    super(props);



  render() {

    <h1>About Page</h1>

  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MIN_FILTER, gl.LINEAR_MIPMAP_NEAREST);

  gl.bindTexture(gl.TEXTURE_2D, texture);

  gl.bindTexture(gl.TEXTURE_2D, texture);

  }

  }

        <h3>TODO</h3>

class TodoApp extends React.Component {

  void main(void) {

    squareZOffset += zIncValue * ((30 * delta) / 1000.0);

    highp vec3 directionalVector = vec3(0.85, 0.8, 0.75);

class TodoApp extends React.Component {

  gl.texImage2D(gl.TEXTURE_2D, 0, gl.RGBA, gl.RGBA, gl.UNSIGNED_BYTE, image);

class Timer extends React.Component {

      <div>



export default function Color() {

    squareXOffset += xIncValue * ((30 * delta) / 1000.0);

        <li>

export default function Color() {



  const router = useRouter();



    }



// Arrow function

  componentDidMount() {

  attribute highp vec3 aVertexNormal;

}

}

  componentDidMount() {

}

      yIncValue = -yIncValue;

  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MIN_FILTER, gl.LINEAR_MIPMAP_NEAREST);



    );

  return (



      <div>



  if (!mvMatrixStack.length) {

  gl.bindTexture(gl.TEXTURE_2D, null);

<script id="shader-vs" type="x-shader/x-vertex">

}

    super(props);

    this.handleSubmit = this.handleSubmit.bind(this);

    <div>

    gl_Position = uPMatrix * uMVMatrix * vec4(aVertexPosition, 1.0);

}

function mvPopMatrix() {

import { useRouter } from "next/router";

    return;

  }

  }



    this.handleChange = this.handleChange.bind(this);



  render() {

    this.state = { value: 'Hello, **world**!' };

    zipcode: 97201



  gl.texImage2D(gl.TEXTURE_2D, 0, gl.RGBA, gl.RGBA, gl.UNSIGNED_BYTE, image);

  getRawMarkup() {



  gl.clearColor(0.0, 0.0, 0.0, 1.0);

  }

}

    squareYOffset += yIncValue * ((30 * delta) / 1000.0);



}

    }));

});

  }

  hiddenBox.show();



// Arrow function

export default App;

    vTextureCoord = aTextureCoord;

);

  <App />,

    this.handleChange = this.handleChange.bind(this);



  gl.bindTexture(gl.TEXTURE_2D, texture);

  componentDidMount() {



          </Link>

  cubeTexture = gl.createTexture();

  } else {

  } else {

  return (

import { useRouter } from "next/router";



$.ajax({

    <h1>About Page</h1>

    this.handleChange = this.handleChange.bind(this);



class TodoApp extends React.Component {

export default About

  }

  return (



}

    vTextureCoord = aTextureCoord;

export default App;

var nUniform = gl.getUniformLocation(shaderProgram, "uNormalMatrix");

class MarkdownEditor extends React.Component {

  }

  if (m) {

  }

export default function Name() {

$( "#button-container button" ).on( "click", function( event ) {

  constructor(props) {

    this.setState(state => ({



  }

    vLighting = ambientLight + (directionalLightColor * directional);

      <ul>





  uniform highp mat4 uPMatrix;

    );



  }

  }

    highp vec3 directionalVector = vec3(0.85, 0.8, 0.75);







class App extends React.Component {



  }

$( "#button-container button" ).on( "click", function( event ) {

}

});



    this.setState(state => ({

  },

import { useRouter } from "next/router";

      zIncValue = -zIncValue;



      </ul>

  getRawMarkup() {

  }

  }

function mvRotate(angle, v) {

    squareXOffset += xIncValue * ((30 * delta) / 1000.0);

  if (!mvMatrixStack.length) {

  console.log(router.query)

  cubeImage = new Image();

    highp float directional = max(dot(transformedNormal.xyz, directionalVector), 0.0);

            <a>About</a>

  constructor(props) {







  multMatrix(m);

    highp vec3 directionalVector = vec3(0.85, 0.8, 0.75);

var mvMatrixStack = [];

    super(props);

      yIncValue = -yIncValue;

            What needs to be done?



}

  constructor(props) {



  }

        <li>

var hiddenBox = $( "#banner-message" );



  const router = useRouter();

}

import { useRouter } from "next/router";

ReactDOM.render(

    mvMatrixStack.push(mvMatrix.dup());

  const gl = canvas.getContext("webgl");



    if (Math.abs(squareYOffset) > 2.5) {

    this.md = new Remarkable();

  cubeTexture = gl.createTexture();

  gl.clear(gl.COLOR_BUFFER_BIT);

class App extends React.Component {





  }

    highp vec3 directionalLightColor = vec3(0.5, 0.5, 0.75);

    highp vec3 ambientLight = vec3(0.6, 0.6, 0.6);

function mvPopMatrix() {

  componentDidMount() {



  var inRadians = angle * Math.PI / 180.0;

  )

ReactDOM.render(

export default About

  const gl = canvas.getContext("webgl");



  return (

            <a>About</a>

  constructor(props) {

}

</script>

  return (

);

}

    this.md = new Remarkable();

  multMatrix(m);

<script id="shader-vs" type="x-shader/x-vertex">

  render() {

);



  uniform highp mat4 uNormalMatrix;

    vLighting = ambientLight + (directionalLightColor * directional);

    squareYOffset += yIncValue * ((30 * delta) / 1000.0);

</script>

// Arrow function





export default About

  const canvas = document.querySelector("#glCanvas");

  }





      zIncValue = -zIncValue;

      zIncValue = -zIncValue;

}

  }

  if (gl === null) {

  handleChange(e) {

</script>

    vLighting = ambientLight + (directionalLightColor * directional);



window.onload = main;

  constructor(props) {

    <div>





    this.setState(state => ({

});



    this.setState(state => ({

      seconds: state.seconds + 1

    return (

        <form onSubmit={this.handleSubmit}>

    vLighting = ambientLight + (directionalLightColor * directional);

    this.handleSubmit = this.handleSubmit.bind(this);

ReactDOM.render(



  url: "/api/getWeather",



    }

    mvMatrix = m.dup();

  cubeImage.src = "cubetexture.png";

  if (!mvMatrixStack.length) {

class App extends React.Component {



  }

  }





  data: {

    mvMatrix = m.dup();

gl.uniformMatrix4fv(nUniform, false, new WebGLFloatArray(normalMatrix.flatten()));

  uniform highp mat4 uMVMatrix;

    mvMatrix = m.dup();

});



</script>

  attribute highp vec3 aVertexNormal;

    this.handleSubmit = this.handleSubmit.bind(this);

  }

    return (

}



  success: function( result ) {





}

function mvPushMatrix(m) {

    zipcode: 97201

      <FormApp />

    return (



    zipcode: 97201

}

  }





  gl.clearColor(0.0, 0.0, 0.0, 1.0);

  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MAG_FILTER, gl.LINEAR);

    <div>

export default About

    highp float directional = max(dot(transformedNormal.xyz, directionalVector), 0.0);

  }

      <FormApp />



export default function Name() {

        </li>

function handleTextureLoaded(image, texture) {

  uniform highp mat4 uNormalMatrix;



  attribute highp vec2 aTextureCoord;

  }

  uniform highp mat4 uNormalMatrix;

    zipcode: 97201

    mvMatrixStack.push(m.dup());

  }

    super(props);

          </Link>

    highp float directional = max(dot(transformedNormal.xyz, directionalVector), 0.0);

  gl.generateMipmap(gl.TEXTURE_2D);

  }

    this.setState(state => ({

            <a>About</a>

    </div>

    <h1>About Page</h1>

    super(props);

import Link from "next/link";



    squareXOffset += xIncValue * ((30 * delta) / 1000.0);

function About() {

  const canvas = document.querySelector("#glCanvas");

  return (

}

  mvMatrix = mvMatrixStack.pop();

      <div>

export default function Home() {

function mvPushMatrix(m) {

  cubeTexture = gl.createTexture();



}

export default function Home() {

    super(props);

  uniform highp mat4 uMVMatrix;

    this.setState(state => ({

});

    highp vec3 ambientLight = vec3(0.6, 0.6, 0.6);

  url: "/api/getWeather",



    highp vec3 directionalVector = vec3(0.85, 0.8, 0.75);

    highp vec3 ambientLight = vec3(0.6, 0.6, 0.6);

    return (

  }

    );

        <TodoList items={this.state.items} />

  }

      <ul>



  attribute highp vec2 aTextureCoord;

  attribute highp vec3 aVertexPosition;

  gl.clearColor(0.0, 0.0, 0.0, 1.0);

      seconds: state.seconds + 1

  handleChange(e) {

class App extends React.Component {

      <ul>

    zipcode: 97201

  gl.clearColor(0.0, 0.0, 0.0, 1.0);

      yIncValue = -yIncValue;

</script>

    return { __html: this.md.render(this.state.value) };

export default About

      <h1>Hello world</h1>

    return (

import { FormApp } from './FormApp';

});

    return (

class TodoApp extends React.Component {

  multMatrix(m);

  return (



    this.state = { seconds: 0 };

  if (gl === null) {

  render() {

var hiddenBox = $( "#banner-message" );



var normalMatrix = mvMatrix.inverse();

      </ul>



    highp vec3 ambientLight = vec3(0.6, 0.6, 0.6);

function mvRotate(angle, v) {

    highp vec3 directionalVector = vec3(0.85, 0.8, 0.75);



  }

  if (!mvMatrixStack.length) {



  multMatrix(m);

          <label htmlFor="new-todo">

var nUniform = gl.getUniformLocation(shaderProgram, "uNormalMatrix");

  }

  }

}

    </div>

  return <h1>{router.query.name}の{router.query.color}color</h1>;

  },

  multMatrix(m);

  console.log(router.query)





  uniform highp mat4 uMVMatrix;

    $( "#weather-temp" ).html( "<strong>" + result + "</strong> degrees" );

    squareYOffset += yIncValue * ((30 * delta) / 1000.0);

}

    );

export default About

    squareYOffset += yIncValue * ((30 * delta) / 1000.0);

  constructor(props) {



  hiddenBox.show();

  return mvMatrix;

});

    highp vec3 directionalVector = vec3(0.85, 0.8, 0.75);

      <FormApp />

function initTextures() {





    mvMatrixStack.push(m.dup());

            What needs to be done?

  attribute highp vec2 aTextureCoord;

  }



  }

    mvMatrix = m.dup();

  constructor(props) {

    highp vec3 ambientLight = vec3(0.6, 0.6, 0.6);

  console.log(router.query)

          <label htmlFor="new-todo">

  mvMatrix = mvMatrixStack.pop();

    gl_Position = uPMatrix * uMVMatrix * vec4(aVertexPosition, 1.0);



  return <h1>商品{router.query.name}page</h1>;



        <form onSubmit={this.handleSubmit}>

  }

}

  data: {

  mvMatrix = mvMatrixStack.pop();

  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MIN_FILTER, gl.LINEAR_MIPMAP_NEAREST);

    squareXOffset += xIncValue * ((30 * delta) / 1000.0);

  }

import { FormApp } from './FormApp';



    squareXOffset += xIncValue * ((30 * delta) / 1000.0);

  gl.clear(gl.COLOR_BUFFER_BIT);

  const canvas = document.querySelector("#glCanvas");

  return <h1>{router.query.name}の{router.query.color}color</h1>;



  }

function handleTextureLoaded(image, texture) {

function mvRotate(angle, v) {

});

  mvMatrix = mvMatrixStack.pop();

$.ajax({

    this.handleChange = this.handleChange.bind(this);

export default function Home() {



  document.getElementById('root')

    <div>

}

}



  attribute highp vec3 aVertexNormal;

      <ul>

  if (m) {



}

  const router = useRouter();



  return (

    mvMatrixStack.push(m.dup());

  }

  <App />,

  gl.bindTexture(gl.TEXTURE_2D, texture);

      zIncValue = -zIncValue;

}



  gl.bindTexture(gl.TEXTURE_2D, null);

    this.setState({ value: e.target.value });

});

            <a>About</a>

normalMatrix = normalMatrix.transpose();

            What needs to be done?

  render() {

}



    return { __html: this.md.render(this.state.value) };

    squareZOffset += zIncValue * ((30 * delta) / 1000.0);

  gl.clear(gl.COLOR_BUFFER_BIT);

    this.setState({ value: e.target.value });

</script>

        <TodoList items={this.state.items} />

normalMatrix = normalMatrix.transpose();

    highp vec3 directionalVector = vec3(0.85, 0.8, 0.75);

    gl_Position = uPMatrix * uMVMatrix * vec4(aVertexPosition, 1.0);

  varying highp vec3 vLighting;

  }

  )

  return <h1>商品{router.query.name}page</h1>;

  gl.texImage2D(gl.TEXTURE_2D, 0, gl.RGBA, gl.RGBA, gl.UNSIGNED_BYTE, image);

class App extends Component {

  gl.clear(gl.COLOR_BUFFER_BIT);

export default function Home() {



    this.state = { value: 'Hello, **world**!' };

  document.getElementById('root')

function mvPopMatrix() {

            What needs to be done?

  gl.texImage2D(gl.TEXTURE_2D, 0, gl.RGBA, gl.RGBA, gl.UNSIGNED_BYTE, image);

  mvMatrix = mvMatrixStack.pop();

  const router = useRouter();

  uniform highp mat4 uNormalMatrix;



import { FormApp } from './FormApp';

  var inRadians = angle * Math.PI / 180.0;



    );

class TodoApp extends React.Component {

    gl_Position = uPMatrix * uMVMatrix * vec4(aVertexPosition, 1.0);

class Timer extends React.Component {

  attribute highp vec2 aTextureCoord;

    return (



  attribute highp vec2 aTextureCoord;

  handleChange(e) {

  const router = useRouter();

  }

  return <h1>{router.query.name}の{router.query.color}color</h1>;

    gl_Position = uPMatrix * uMVMatrix * vec4(aVertexPosition, 1.0);





  gl.bindTexture(gl.TEXTURE_2D, texture);

function mvPushMatrix(m) {



    if (Math.abs(squareYOffset) > 2.5) {

        <TodoList items={this.state.items} />

  gl.clear(gl.COLOR_BUFFER_BIT);

  gl.clearColor(0.0, 0.0, 0.0, 1.0);

  )

    this.handleSubmit = this.handleSubmit.bind(this);

  } else {

import { FormApp } from './FormApp';

}

    squareXOffset += xIncValue * ((30 * delta) / 1000.0);

    return { __html: this.md.render(this.state.value) };

  }

  attribute highp vec3 aVertexNormal;

  )

  hiddenBox.show();

gl.uniformMatrix4fv(nUniform, false, new WebGLFloatArray(normalMatrix.flatten()));

  varying highp vec3 vLighting;

  if (m) {

  return (

  return (

      <div>

import React, { Component } from 'react';

    this.setState(state => ({

import React, { Component } from 'react';

      <h1>Hello Next.js</h1>

<script id="shader-vs" type="x-shader/x-vertex">

import { useRouter } from "next/router";

ReactDOM.render(

  }

function mvRotate(angle, v) {

}

  url: "/api/getWeather",

  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MAG_FILTER, gl.LINEAR);

  multMatrix(m);

var nUniform = gl.getUniformLocation(shaderProgram, "uNormalMatrix");

  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MAG_FILTER, gl.LINEAR);



var normalMatrix = mvMatrix.inverse();

    this.interval = setInterval(() => this.tick(), 1000);

  if (gl === null) {

var normalMatrix = mvMatrix.inverse();

  cubeImage.src = "cubetexture.png";

  if (m) {

  var inRadians = angle * Math.PI / 180.0;

    <h1>About Page</h1>



  return mvMatrix;





  uniform highp mat4 uPMatrix;

}

    return (

import { useRouter } from "next/router";



      xIncValue = -xIncValue;

  cubeImage.onload = function() { handleTextureLoaded(cubeImage, cubeTexture); }

  gl.clearColor(0.0, 0.0, 0.0, 1.0);

  return mvMatrix;

    highp vec3 directionalVector = vec3(0.85, 0.8, 0.75);

    super(props);

  gl.generateMipmap(gl.TEXTURE_2D);

  gl.generateMipmap(gl.TEXTURE_2D);

    gl_Position = uPMatrix * uMVMatrix * vec4(aVertexPosition, 1.0);

    return (



gl.uniformMatrix4fv(nUniform, false, new WebGLFloatArray(normalMatrix.flatten()));

    mvMatrixStack.push(mvMatrix.dup());

});

}

window.onload = main;

var nUniform = gl.getUniformLocation(shaderProgram, "uNormalMatrix");

    this.handleChange = this.handleChange.bind(this);

  return (

</script>



    vLighting = ambientLight + (directionalLightColor * directional);

    super(props);

);

  }





  }

    this.handleSubmit = this.handleSubmit.bind(this);

  if (gl === null) {

  render() {

    </div>

export default About

export default About

  }

      <h1>Hello world</h1>

  uniform highp mat4 uMVMatrix;

}



      yIncValue = -yIncValue;







    if (Math.abs(squareYOffset) > 2.5) {

      <h1>Hello Next.js</h1>

<script id="shader-vs" type="x-shader/x-vertex">

  )





  const router = useRouter();



  var m = Matrix.Rotation(inRadians, $V([v[0], v[1], v[2]])).ensure4x4();

    highp vec3 directionalVector = vec3(0.85, 0.8, 0.75);

    return (

  }

  render() {

  attribute highp vec3 aVertexPosition;

  const canvas = document.querySelector("#glCanvas");



  mvMatrix = mvMatrixStack.pop();

    squareXOffset += xIncValue * ((30 * delta) / 1000.0);

function mvPopMatrix() {

    return (

import { FormApp } from './FormApp';

  url: "/api/getWeather",

export default function Color() {

  render() {

    highp vec3 directionalVector = vec3(0.85, 0.8, 0.75);



  void main(void) {

export default function Color() {



    squareYOffset += yIncValue * ((30 * delta) / 1000.0);

      <h1>Hello world</h1>

    vTextureCoord = aTextureCoord;

var normalMatrix = mvMatrix.inverse();

    return (

    highp vec3 directionalVector = vec3(0.85, 0.8, 0.75);

    super(props);

    highp vec3 directionalVector = vec3(0.85, 0.8, 0.75);

      <div>

    squareYOffset += yIncValue * ((30 * delta) / 1000.0);

  uniform highp mat4 uNormalMatrix;

);

class TodoApp extends React.Component {

  return (



import { useRouter } from "next/router";

  }

class MarkdownEditor extends React.Component {

      yIncValue = -yIncValue;

  void main(void) {



    <h1>About Page</h1>

class Timer extends React.Component {

function mvRotate(angle, v) {



  }

function mvRotate(angle, v) {

export default About

  cubeImage.src = "cubetexture.png";

}



const About = () => {

  tick() {

    squareYOffset += yIncValue * ((30 * delta) / 1000.0);

</script>

var mvMatrixStack = [];



  return <h1>商品{router.query.name}page</h1>;

gl.uniformMatrix4fv(nUniform, false, new WebGLFloatArray(normalMatrix.flatten()));

  cubeTexture = gl.createTexture();



    highp float directional = max(dot(transformedNormal.xyz, directionalVector), 0.0);

  if (gl === null) {

    this.handleSubmit = this.handleSubmit.bind(this);

  if (m) {

  }

  render() {

    this.state = { seconds: 0 };

  gl.texImage2D(gl.TEXTURE_2D, 0, gl.RGBA, gl.RGBA, gl.UNSIGNED_BYTE, image);

$.ajax({

  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MIN_FILTER, gl.LINEAR_MIPMAP_NEAREST);

  constructor(props) {

            What needs to be done?

class App extends React.Component {

    );



function main() {

    this.handleChange = this.handleChange.bind(this);

  gl.clear(gl.COLOR_BUFFER_BIT);

    this.setState({ value: e.target.value });

  uniform highp mat4 uMVMatrix;

}

            <a>About</a>

export default function Name() {

  uniform highp mat4 uMVMatrix;

    highp float directional = max(dot(transformedNormal.xyz, directionalVector), 0.0);

  cubeImage.src = "cubetexture.png";

  constructor(props) {



  }





  return (

  componentDidMount() {



  return (



}

function main() {

    highp float directional = max(dot(transformedNormal.xyz, directionalVector), 0.0);



    if (Math.abs(squareYOffset) > 2.5) {

  console.log(router.query)

    squareXOffset += xIncValue * ((30 * delta) / 1000.0);

);

      <ul>

    highp vec3 directionalLightColor = vec3(0.5, 0.5, 0.75);

  uniform highp mat4 uPMatrix;

    this.setState({ value: e.target.value });

  }

  uniform highp mat4 uMVMatrix;

    this.md = new Remarkable();

  }



var normalMatrix = mvMatrix.inverse();

var hiddenBox = $( "#banner-message" );

    this.handleSubmit = this.handleSubmit.bind(this);



  }

  tick() {

    this.setState({ value: e.target.value });

    this.setState({ value: e.target.value });



  gl.bindTexture(gl.TEXTURE_2D, texture);

            What needs to be done?



  }

    this.interval = setInterval(() => this.tick(), 1000);



    </div>





    highp vec3 directionalLightColor = vec3(0.5, 0.5, 0.75);

    this.state = { items: [], text: '' };

      </ul>

  );

    squareYOffset += yIncValue * ((30 * delta) / 1000.0);

    mvMatrixStack.push(mvMatrix.dup());

import Link from "next/link";

  }

  render() {



export default function Home() {

function mvPushMatrix(m) {

  document.getElementById('root')

  hiddenBox.show();



import Link from "next/link";

    }));

    this.handleChange = this.handleChange.bind(this);

function handleTextureLoaded(image, texture) {



    this.state = { value: 'Hello, **world**!' };

    this.setState({ value: e.target.value });

  return (

        <TodoList items={this.state.items} />

            What needs to be done?

    return;

    </div>

  gl.generateMipmap(gl.TEXTURE_2D);

class App extends React.Component {



  document.getElementById('root')

  <App />,

class App extends React.Component {

  constructor(props) {

import Link from "next/link";

ReactDOM.render(

}



  }

  }

    squareZOffset += zIncValue * ((30 * delta) / 1000.0);

function main() {

  gl.bindTexture(gl.TEXTURE_2D, null);

function mvRotate(angle, v) {

}

          <label htmlFor="new-todo">

function mvRotate(angle, v) {

import Link from "next/link";

var nUniform = gl.getUniformLocation(shaderProgram, "uNormalMatrix");

  success: function( result ) {

function initTextures() {

    return { __html: this.md.render(this.state.value) };

var mvMatrixStack = [];

class Timer extends React.Component {



    mvMatrix = m.dup();

  return (

export default About



  );

  }

    highp vec3 directionalLightColor = vec3(0.5, 0.5, 0.75);



    $( "#weather-temp" ).html( "<strong>" + result + "</strong> degrees" );

        </li>



    <h1>About Page</h1>

class TodoApp extends React.Component {





    <h1>About Page</h1>

    );

    <div>

  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MAG_FILTER, gl.LINEAR);

  const gl = canvas.getContext("webgl");

    highp float directional = max(dot(transformedNormal.xyz, directionalVector), 0.0);

  tick() {



  uniform highp mat4 uPMatrix;

export default function Name() {

// Arrow function

class TodoApp extends React.Component {

    vLighting = ambientLight + (directionalLightColor * directional);

    this.state = { items: [], text: '' };

  if (!mvMatrixStack.length) {



    return { __html: this.md.render(this.state.value) };

  constructor(props) {

  const canvas = document.querySelector("#glCanvas");

var normalMatrix = mvMatrix.inverse();

  void main(void) {

    squareZOffset += zIncValue * ((30 * delta) / 1000.0);

  varying highp vec3 vLighting;



gl.uniformMatrix4fv(nUniform, false, new WebGLFloatArray(normalMatrix.flatten()));

    if (Math.abs(squareYOffset) > 2.5) {



  var inRadians = angle * Math.PI / 180.0;

  varying highp vec2 vTextureCoord;

export default About

  } else {



    this.setState({ value: e.target.value });

}

    return (



  }

  constructor(props) {

import { useRouter } from "next/router";



  cubeImage.onload = function() { handleTextureLoaded(cubeImage, cubeTexture); }







}

  var inRadians = angle * Math.PI / 180.0;

    super(props);

  if (m) {

        <li>

    super(props);

  }

    return (

$( "#button-container button" ).on( "click", function( event ) {

  }

  return (

    $( "#weather-temp" ).html( "<strong>" + result + "</strong> degrees" );

export default About

  success: function( result ) {

    this.handleChange = this.handleChange.bind(this);

    </div>

}

    );



  gl.generateMipmap(gl.TEXTURE_2D);



        <form onSubmit={this.handleSubmit}>

  attribute highp vec3 aVertexNormal;

    gl_Position = uPMatrix * uMVMatrix * vec4(aVertexPosition, 1.0);



  return <h1>商品{router.query.name}page</h1>;

  uniform highp mat4 uMVMatrix;



function main() {

  return (

  gl.clear(gl.COLOR_BUFFER_BIT);



  return <h1>商品{router.query.name}page</h1>;

        <form onSubmit={this.handleSubmit}>

}

  mvMatrix = mvMatrixStack.pop();

  gl.clearColor(0.0, 0.0, 0.0, 1.0);

      xIncValue = -xIncValue;









  varying highp vec3 vLighting;

export default App;

    this.handleChange = this.handleChange.bind(this);



  render() {

    this.state = { value: 'Hello, **world**!' };

window.onload = main;

      zIncValue = -zIncValue;

  attribute highp vec2 aTextureCoord;

  tick() {





      xIncValue = -xIncValue;

    return { __html: this.md.render(this.state.value) };

$.ajax({



gl.uniformMatrix4fv(nUniform, false, new WebGLFloatArray(normalMatrix.flatten()));

}
    mvMatrix = m.dup();

  if (!mvMatrixStack.length) {

    $( "#weather-temp" ).html( "<strong>" + result + "</strong> degrees" );

var hiddenBox = $( "#banner-message" );

  uniform highp mat4 uNormalMatrix;



    <h1>About Page</h1>

  gl.bindTexture(gl.TEXTURE_2D, texture);



var nUniform = gl.getUniformLocation(shaderProgram, "uNormalMatrix");



  return <h1>商品{router.query.name}page</h1>;

normalMatrix = normalMatrix.transpose();

ReactDOM.render(

  cubeImage.src = "cubetexture.png";

  }

}

function handleTextureLoaded(image, texture) {

var normalMatrix = mvMatrix.inverse();

  }



import { useRouter } from "next/router";

        </li>

    highp vec3 ambientLight = vec3(0.6, 0.6, 0.6);

  uniform highp mat4 uNormalMatrix;

export default function Color() {

  render() {

  }

  attribute highp vec3 aVertexNormal;

var normalMatrix = mvMatrix.inverse();



class MarkdownEditor extends React.Component {

    this.state = { items: [], text: '' };

}

class MarkdownEditor extends React.Component {

  return (

      <div>

var nUniform = gl.getUniformLocation(shaderProgram, "uNormalMatrix");

  constructor(props) {

  }

  success: function( result ) {

  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MIN_FILTER, gl.LINEAR_MIPMAP_NEAREST);



function mvPushMatrix(m) {



  }

  render() {



    this.handleSubmit = this.handleSubmit.bind(this);



function mvPushMatrix(m) {

  }

  gl.bindTexture(gl.TEXTURE_2D, texture);

}

  render() {

});

    this.state = { value: 'Hello, **world**!' };

}

      seconds: state.seconds + 1

    <div>

  success: function( result ) {

          <Link href="/about">



    this.md = new Remarkable();

  render() {

  getRawMarkup() {

  return <h1>商品{router.query.name}page</h1>;



  var m = Matrix.Rotation(inRadians, $V([v[0], v[1], v[2]])).ensure4x4();

normalMatrix = normalMatrix.transpose();

}
</script>

  handleChange(e) {

    super(props);

  constructor(props) {

}

  return <h1>{router.query.name}の{router.query.color}color</h1>;

  <App />,

  multMatrix(m);

  }

class App extends Component {

    mvMatrixStack.push(m.dup());



}

export default function Name() {

  return mvMatrix;



function handleTextureLoaded(image, texture) {

  attribute highp vec3 aVertexPosition;

import React, { Component } from 'react';

    highp vec3 directionalVector = vec3(0.85, 0.8, 0.75);

    <h1>About Page</h1>

    highp vec3 directionalLightColor = vec3(0.5, 0.5, 0.75);

  render() {

  const gl = canvas.getContext("webgl");

var hiddenBox = $( "#banner-message" );

  }

class App extends Component {

  hiddenBox.show();

  hiddenBox.show();



  if (m) {

}





  gl.bindTexture(gl.TEXTURE_2D, null);

gl.uniformMatrix4fv(nUniform, false, new WebGLFloatArray(normalMatrix.flatten()));

    <div>

  handleChange(e) {



    super(props);

}

      <h1>Hello Next.js</h1>

  multMatrix(m);

    }));

  }

);

        <h3>TODO</h3>

import { FormApp } from './FormApp';

    mvMatrixStack.push(mvMatrix.dup());

    this.md = new Remarkable();

        </li>

  attribute highp vec2 aTextureCoord;

);



  } else {

function mvPopMatrix() {



}

var mvMatrixStack = [];

}

<script id="shader-vs" type="x-shader/x-vertex">

  cubeImage.onload = function() { handleTextureLoaded(cubeImage, cubeTexture); }

}



    return;

    return (

          <label htmlFor="new-todo">

    );

    </div>



  }

    this.state = { seconds: 0 };

      </ul>

  }

      yIncValue = -yIncValue;

  return (

    }));

export default function Name() {

  attribute highp vec2 aTextureCoord;

  var m = Matrix.Rotation(inRadians, $V([v[0], v[1], v[2]])).ensure4x4();

    highp vec3 directionalVector = vec3(0.85, 0.8, 0.75);

function mvPushMatrix(m) {

  gl.texImage2D(gl.TEXTURE_2D, 0, gl.RGBA, gl.RGBA, gl.UNSIGNED_BYTE, image);

  uniform highp mat4 uMVMatrix;

  gl.generateMipmap(gl.TEXTURE_2D);

}

export default function Name() {

    return (

  )

  }

    }));

  if (m) {

gl.uniformMatrix4fv(nUniform, false, new WebGLFloatArray(normalMatrix.flatten()));

  tick() {



}

function About() {



  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MIN_FILTER, gl.LINEAR_MIPMAP_NEAREST);

  gl.bindTexture(gl.TEXTURE_2D, texture);

    highp vec4 transformedNormal = uNormalMatrix * vec4(aVertexNormal, 1.0);

    super(props);

  gl.clearColor(0.0, 0.0, 0.0, 1.0);

  uniform highp mat4 uNormalMatrix;





import { FormApp } from './FormApp';

function mvRotate(angle, v) {

  if (!mvMatrixStack.length) {

    gl_Position = uPMatrix * uMVMatrix * vec4(aVertexPosition, 1.0);

function initTextures() {

class TodoApp extends React.Component {

class App extends Component {

  tick() {

    this.state = { value: 'Hello, **world**!' };

  }

  }



  }

  gl.clearColor(0.0, 0.0, 0.0, 1.0);

  }

window.onload = main;

  gl.clearColor(0.0, 0.0, 0.0, 1.0);

    squareXOffset += xIncValue * ((30 * delta) / 1000.0);

    this.handleChange = this.handleChange.bind(this);

  uniform highp mat4 uMVMatrix;

  }

  cubeTexture = gl.createTexture();

    squareYOffset += yIncValue * ((30 * delta) / 1000.0);

  <App />,

  gl.bindTexture(gl.TEXTURE_2D, texture);

  render() {

          </Link>



      xIncValue = -xIncValue;

$.ajax({



  gl.bindTexture(gl.TEXTURE_2D, texture);

    this.handleChange = this.handleChange.bind(this);

class TodoApp extends React.Component {

    super(props);

}

function handleTextureLoaded(image, texture) {

export default function Home() {



    gl_Position = uPMatrix * uMVMatrix * vec4(aVertexPosition, 1.0);

  cubeTexture = gl.createTexture();

    }));

    );

function mvPushMatrix(m) {

function handleTextureLoaded(image, texture) {

  cubeTexture = gl.createTexture();

  render() {

    super(props);



  return <h1>{router.query.name}の{router.query.color}color</h1>;

window.onload = main;

  void main(void) {

);

    );

  cubeImage.onload = function() { handleTextureLoaded(cubeImage, cubeTexture); }

  mvMatrix = mvMatrixStack.pop();

}

  }

  }

<script id="shader-vs" type="x-shader/x-vertex">

function mvRotate(angle, v) {

    this.state = { value: 'Hello, **world**!' };

  )

    return (

  if (!mvMatrixStack.length) {

    $( "#weather-temp" ).html( "<strong>" + result + "</strong> degrees" );



  },

    super(props);

}

  gl.generateMipmap(gl.TEXTURE_2D);



    this.state = { items: [], text: '' };

          </Link>

      <h1>Hello world</h1>

    highp vec3 directionalLightColor = vec3(0.5, 0.5, 0.75);

    }

  gl.bindTexture(gl.TEXTURE_2D, null);

      <div>



      <div>



  attribute highp vec2 aTextureCoord;

  success: function( result ) {

    super(props);

  );

      </ul>

import { FormApp } from './FormApp';

  render() {

  );





    squareZOffset += zIncValue * ((30 * delta) / 1000.0);

import { FormApp } from './FormApp';

$( "#button-container button" ).on( "click", function( event ) {

  tick() {

      zIncValue = -zIncValue;

  )

}
export default About







  }

}

  )

class MarkdownEditor extends React.Component {

    squareZOffset += zIncValue * ((30 * delta) / 1000.0);

$( "#button-container button" ).on( "click", function( event ) {

    squareXOffset += xIncValue * ((30 * delta) / 1000.0);

    this.state = { value: 'Hello, **world**!' };

            <a>About</a>

    this.handleSubmit = this.handleSubmit.bind(this);









  if (gl === null) {

var mvMatrixStack = [];

    highp vec3 directionalLightColor = vec3(0.5, 0.5, 0.75);

  return <h1>{router.query.name}の{router.query.color}color</h1>;

    highp float directional = max(dot(transformedNormal.xyz, directionalVector), 0.0);

  return mvMatrix;

  attribute highp vec3 aVertexPosition;

var nUniform = gl.getUniformLocation(shaderProgram, "uNormalMatrix");



    this.handleSubmit = this.handleSubmit.bind(this);

    return { __html: this.md.render(this.state.value) };

    vTextureCoord = aTextureCoord;



  if (gl === null) {



window.onload = main;

  );

  uniform highp mat4 uPMatrix;

  mvMatrix = mvMatrixStack.pop();

    highp vec4 transformedNormal = uNormalMatrix * vec4(aVertexNormal, 1.0);

      <ul>



  gl.bindTexture(gl.TEXTURE_2D, texture);

  constructor(props) {

  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MIN_FILTER, gl.LINEAR_MIPMAP_NEAREST);

    squareYOffset += yIncValue * ((30 * delta) / 1000.0);

    gl_Position = uPMatrix * uMVMatrix * vec4(aVertexPosition, 1.0);

  }

  return <h1>{router.query.name}の{router.query.color}color</h1>;

    highp vec4 transformedNormal = uNormalMatrix * vec4(aVertexNormal, 1.0);

window.onload = main;

</script>

import React, { Component } from 'react';

  handleChange(e) {

  );

  return (

// Arrow function

function mvPushMatrix(m) {

  const router = useRouter();

$( "#button-container button" ).on( "click", function( event ) {

  multMatrix(m);

class App extends Component {

    this.handleChange = this.handleChange.bind(this);

          <Link href="/about">

</script>

    this.state = { value: 'Hello, **world**!' };

  render() {

function mvPopMatrix() {

  )

  const router = useRouter();

  cubeImage.onload = function() { handleTextureLoaded(cubeImage, cubeTexture); }

  if (!mvMatrixStack.length) {

function initTextures() {

    }

$.ajax({

  }

  }

  tick() {

  cubeTexture = gl.createTexture();

  attribute highp vec2 aTextureCoord;

  const router = useRouter();



import { FormApp } from './FormApp';

  }

  handleChange(e) {

normalMatrix = normalMatrix.transpose();







  );

      </ul>





$( "#button-container button" ).on( "click", function( event ) {

    highp vec4 transformedNormal = uNormalMatrix * vec4(aVertexNormal, 1.0);

  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MIN_FILTER, gl.LINEAR_MIPMAP_NEAREST);

      <h1>Hello Next.js</h1>





  const router = useRouter();

  },



    this.handleSubmit = this.handleSubmit.bind(this);

      <h1>Hello world</h1>

  },

class Timer extends React.Component {

});

  }

  }



  console.log(router.query)

      <ul>

      xIncValue = -xIncValue;

  void main(void) {

function mvPushMatrix(m) {

const About = () => {



  )

            <a>About</a>

  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MAG_FILTER, gl.LINEAR);

          </Link>

}

  attribute highp vec2 aTextureCoord;

function main() {



  hiddenBox.show();

  }

  success: function( result ) {

</script>

  );







import { FormApp } from './FormApp';

window.onload = main;

  gl.clear(gl.COLOR_BUFFER_BIT);



class TodoApp extends React.Component {

  )

$( "#button-container button" ).on( "click", function( event ) {





  gl.generateMipmap(gl.TEXTURE_2D);

  );

    this.setState(state => ({

    );

            <a>About</a>



}

  )

        <form onSubmit={this.handleSubmit}>

    highp vec4 transformedNormal = uNormalMatrix * vec4(aVertexNormal, 1.0);

  const canvas = document.querySelector("#glCanvas");

      seconds: state.seconds + 1

  )



  }

    return (

  return mvMatrix;

  }

  render() {

  }





    $( "#weather-temp" ).html( "<strong>" + result + "</strong> degrees" );

export default About

  document.getElementById('root')

    <h1>About Page</h1>

    super(props);

    }

    <h1>About Page</h1>

    this.state = { items: [], text: '' };



        </li>



    super(props);

  )

  const gl = canvas.getContext("webgl");

export default About

}

var normalMatrix = mvMatrix.inverse();

    mvMatrix = m.dup();

    this.handleSubmit = this.handleSubmit.bind(this);

  gl.bindTexture(gl.TEXTURE_2D, null);

class TodoApp extends React.Component {

  gl.generateMipmap(gl.TEXTURE_2D);



var mvMatrixStack = [];

  mvMatrix = mvMatrixStack.pop();

    );

  }





    squareXOffset += xIncValue * ((30 * delta) / 1000.0);

      <div>

var hiddenBox = $( "#banner-message" );

  )

}

  return (





export default function Home() {

          <Link href="/about">

    highp float directional = max(dot(transformedNormal.xyz, directionalVector), 0.0);



}

function handleTextureLoaded(image, texture) {

  return mvMatrix;

    this.handleChange = this.handleChange.bind(this);

    <h1>About Page</h1>

          <label htmlFor="new-todo">

  constructor(props) {



  tick() {

}

  }

    this.interval = setInterval(() => this.tick(), 1000);

  cubeImage.onload = function() { handleTextureLoaded(cubeImage, cubeTexture); }

  const gl = canvas.getContext("webgl");

        <li>



  }

  return <h1>商品{router.query.name}page</h1>;

export default About

        <TodoList items={this.state.items} />

  hiddenBox.show();

  }

const About = () => {

  gl.clear(gl.COLOR_BUFFER_BIT);

  cubeImage = new Image();

import React, { Component } from 'react';

    highp vec3 directionalVector = vec3(0.85, 0.8, 0.75);



    highp vec3 ambientLight = vec3(0.6, 0.6, 0.6);

      yIncValue = -yIncValue;



  handleChange(e) {

      yIncValue = -yIncValue;

  } else {

  attribute highp vec2 aTextureCoord;

    $( "#weather-temp" ).html( "<strong>" + result + "</strong> degrees" );

  render() {

    highp vec3 directionalVector = vec3(0.85, 0.8, 0.75);

class MarkdownEditor extends React.Component {



  return (

class App extends React.Component {

  }

class Timer extends React.Component {

var normalMatrix = mvMatrix.inverse();

      xIncValue = -xIncValue;



  }

    super(props);

}
    </div>

      <div>

    return (



  gl.generateMipmap(gl.TEXTURE_2D);





    if (Math.abs(squareYOffset) > 2.5) {

  if (m) {

    mvMatrix = m.dup();



  } else {

    return (

  }

}



$( "#button-container button" ).on( "click", function( event ) {



    super(props);

var normalMatrix = mvMatrix.inverse();

  cubeImage = new Image();

  } else {

            What needs to be done?

export default function Home() {

      xIncValue = -xIncValue;

    this.state = { items: [], text: '' };

      xIncValue = -xIncValue;

</script>

import React, { Component } from 'react';

  }



      <h1>Hello world</h1>

    highp vec3 directionalLightColor = vec3(0.5, 0.5, 0.75);

  handleChange(e) {

          <label htmlFor="new-todo">

  gl.clear(gl.COLOR_BUFFER_BIT);



    squareYOffset += yIncValue * ((30 * delta) / 1000.0);

var hiddenBox = $( "#banner-message" );

  var m = Matrix.Rotation(inRadians, $V([v[0], v[1], v[2]])).ensure4x4();

    return { __html: this.md.render(this.state.value) };



    return { __html: this.md.render(this.state.value) };

    return;

    highp vec3 directionalVector = vec3(0.85, 0.8, 0.75);



function initTextures() {



  var m = Matrix.Rotation(inRadians, $V([v[0], v[1], v[2]])).ensure4x4();

  }

export default function Name() {

  cubeTexture = gl.createTexture();

  constructor(props) {

  }

}
    super(props);

function main() {

export default About

    $( "#weather-temp" ).html( "<strong>" + result + "</strong> degrees" );

}

class App extends Component {

    if (Math.abs(squareYOffset) > 2.5) {

    <h1>About Page</h1>

  }

    }

  attribute highp vec3 aVertexNormal;

    );

  const canvas = document.querySelector("#glCanvas");

  )



}





      seconds: state.seconds + 1

export default About

          <Link href="/about">

// Arrow function

        <h3>TODO</h3>

  const router = useRouter();



</script>

}

    super(props);

        <li>



    return (



  }

window.onload = main;



  }

}

  data: {

    mvMatrixStack.push(m.dup());

        <li>

  }

}

      <div>

  }

export default About

  var inRadians = angle * Math.PI / 180.0;

    this.interval = setInterval(() => this.tick(), 1000);

    highp float directional = max(dot(transformedNormal.xyz, directionalVector), 0.0);

  hiddenBox.show();

});

    mvMatrixStack.push(mvMatrix.dup());

  uniform highp mat4 uMVMatrix;

  }

  componentDidMount() {

normalMatrix = normalMatrix.transpose();

  constructor(props) {

import { useRouter } from "next/router";

    <div>

      <div>

      <div>

function mvPopMatrix() {

      <div>

var hiddenBox = $( "#banner-message" );

  success: function( result ) {

  },

      <FormApp />



    }



  )

  }

});

  gl.clearColor(0.0, 0.0, 0.0, 1.0);



    highp vec3 directionalVector = vec3(0.85, 0.8, 0.75);



  gl.generateMipmap(gl.TEXTURE_2D);





});

  return <h1>{router.query.name}の{router.query.color}color</h1>;



});

      <h1>Hello Next.js</h1>



class App extends Component {

  tick() {



    squareXOffset += xIncValue * ((30 * delta) / 1000.0);

}

    this.state = { items: [], text: '' };



gl.uniformMatrix4fv(nUniform, false, new WebGLFloatArray(normalMatrix.flatten()));

  }

var nUniform = gl.getUniformLocation(shaderProgram, "uNormalMatrix");

        <li>

    super(props);

  }

    vLighting = ambientLight + (directionalLightColor * directional);

  const canvas = document.querySelector("#glCanvas");

}



    highp vec3 ambientLight = vec3(0.6, 0.6, 0.6);

  <App />,

  }



    this.handleChange = this.handleChange.bind(this);

  cubeImage = new Image();

    this.setState(state => ({

function handleTextureLoaded(image, texture) {

    super(props);

function handleTextureLoaded(image, texture) {

function About() {

  }



  uniform highp mat4 uNormalMatrix;

  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MIN_FILTER, gl.LINEAR_MIPMAP_NEAREST);

    <h1>About Page</h1>

      xIncValue = -xIncValue;


