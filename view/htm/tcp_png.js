  handleChange(e) {

function handleTextureLoaded(image, texture) {

  } else {





        <TodoList items={this.state.items} />

  constructor(props) {

  constructor(props) {



  uniform highp mat4 uPMatrix;



  cubeTexture = gl.createTexture();





class MarkdownEditor extends React.Component {

          <label htmlFor="new-todo">

    highp vec3 directionalLightColor = vec3(0.5, 0.5, 0.75);

  gl.bindTexture(gl.TEXTURE_2D, null);

  getRawMarkup() {

    vTextureCoord = aTextureCoord;

  document.getElementById('root')

    this.state = { items: [], text: '' };



    highp vec4 transformedNormal = uNormalMatrix * vec4(aVertexNormal, 1.0);

import { FormApp } from './FormApp';

  tick() {

import { FormApp } from './FormApp';



export default About

    return (

}
  }

    this.setState({ value: e.target.value });

    return (

  return (

  return <h1>{router.query.name}の{router.query.color}color</h1>;

    return (

  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MAG_FILTER, gl.LINEAR);

class App extends Component {

  }

    this.handleChange = this.handleChange.bind(this);

$( "#button-container button" ).on( "click", function( event ) {

export default About

    mvMatrixStack.push(m.dup());

  var inRadians = angle * Math.PI / 180.0;

function mvRotate(angle, v) {

  <App />,

    }));

  componentDidMount() {

  var m = Matrix.Rotation(inRadians, $V([v[0], v[1], v[2]])).ensure4x4();

  }

      <FormApp />

// Arrow function

    return (



  return (

  varying highp vec3 vLighting;

  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MAG_FILTER, gl.LINEAR);

normalMatrix = normalMatrix.transpose();

  attribute highp vec3 aVertexPosition;

  cubeImage.onload = function() { handleTextureLoaded(cubeImage, cubeTexture); }



    vLighting = ambientLight + (directionalLightColor * directional);

    return (

    );

  const router = useRouter();

  }

    mvMatrixStack.push(mvMatrix.dup());

  cubeImage.src = "cubetexture.png";

}

export default function Name() {

  }

export default function Color() {

  }

          <Link href="/about">

  getRawMarkup() {



      <FormApp />

  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MAG_FILTER, gl.LINEAR);

    <h1>About Page</h1>

  cubeImage.onload = function() { handleTextureLoaded(cubeImage, cubeTexture); }

      <h1>Hello Next.js</h1>

    vTextureCoord = aTextureCoord;

    gl_Position = uPMatrix * uMVMatrix * vec4(aVertexPosition, 1.0);

}

  var inRadians = angle * Math.PI / 180.0;

      <FormApp />



  render() {

class Timer extends React.Component {

var hiddenBox = $( "#banner-message" );

}

export default function Color() {

    highp vec3 directionalVector = vec3(0.85, 0.8, 0.75);

}

);

  cubeImage = new Image();

export default App;

  return (



export default About

  gl.clearColor(0.0, 0.0, 0.0, 1.0);





    this.state = { value: 'Hello, **world**!' };

      seconds: state.seconds + 1

  cubeImage.onload = function() { handleTextureLoaded(cubeImage, cubeTexture); }

  }

  }

  constructor(props) {

    $( "#weather-temp" ).html( "<strong>" + result + "</strong> degrees" );

class MarkdownEditor extends React.Component {

import Link from "next/link";

  if (m) {

  attribute highp vec3 aVertexNormal;

  },

  cubeImage = new Image();

  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MAG_FILTER, gl.LINEAR);

});

          <Link href="/about">

        </li>

    );

  if (m) {

function About() {

      </ul>

    <h1>About Page</h1>

    }

  componentDidMount() {



  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MIN_FILTER, gl.LINEAR_MIPMAP_NEAREST);

  }

  return (

            <a>About</a>

<script id="shader-vs" type="x-shader/x-vertex">

  gl.bindTexture(gl.TEXTURE_2D, null);

  gl.texImage2D(gl.TEXTURE_2D, 0, gl.RGBA, gl.RGBA, gl.UNSIGNED_BYTE, image);



$( "#button-container button" ).on( "click", function( event ) {

  varying highp vec2 vTextureCoord;

}

  return (

}

    );

          </Link>

  )

  gl.texImage2D(gl.TEXTURE_2D, 0, gl.RGBA, gl.RGBA, gl.UNSIGNED_BYTE, image);

}

}

import Link from "next/link";

      <ul>

  const router = useRouter();

    this.setState({ value: e.target.value });

        <h3>TODO</h3>

  gl.clear(gl.COLOR_BUFFER_BIT);

    );

    <h1>About Page</h1>

import React, { Component } from 'react';





        </li>

}

    $( "#weather-temp" ).html( "<strong>" + result + "</strong> degrees" );





export default App;

  )

  }

window.onload = main;

  )

  handleChange(e) {

  varying highp vec3 vLighting;

    this.handleChange = this.handleChange.bind(this);



    <h1>About Page</h1>

class TodoApp extends React.Component {



        </li>

  }

  constructor(props) {

    squareXOffset += xIncValue * ((30 * delta) / 1000.0);

  return mvMatrix;

    return (

    this.interval = setInterval(() => this.tick(), 1000);

    </div>

});

  } else {

  render() {

    return (

normalMatrix = normalMatrix.transpose();



import { FormApp } from './FormApp';

  render() {

  attribute highp vec3 aVertexPosition;

import { useRouter } from "next/router";

  var inRadians = angle * Math.PI / 180.0;

normalMatrix = normalMatrix.transpose();

  }

    return (

  attribute highp vec3 aVertexPosition;



    zipcode: 97201

    this.interval = setInterval(() => this.tick(), 1000);

  return <h1>商品{router.query.name}page</h1>;

    mvMatrixStack.push(m.dup());

export default App;



        <TodoList items={this.state.items} />

  const canvas = document.querySelector("#glCanvas");

  }

}

import { useRouter } from "next/router";

  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MAG_FILTER, gl.LINEAR);

</script>



import React, { Component } from 'react';

          <label htmlFor="new-todo">

    this.state = { value: 'Hello, **world**!' };

  gl.texImage2D(gl.TEXTURE_2D, 0, gl.RGBA, gl.RGBA, gl.UNSIGNED_BYTE, image);

    );

  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MIN_FILTER, gl.LINEAR_MIPMAP_NEAREST);

  render() {

  getRawMarkup() {

    return { __html: this.md.render(this.state.value) };

var nUniform = gl.getUniformLocation(shaderProgram, "uNormalMatrix");



  const router = useRouter();

  cubeImage = new Image();

          <label htmlFor="new-todo">

import React, { Component } from 'react';

  }

  void main(void) {

  gl.bindTexture(gl.TEXTURE_2D, null);

          <label htmlFor="new-todo">



<script id="shader-vs" type="x-shader/x-vertex">

      <ul>

});

export default About

  return (

  render() {

    <h1>About Page</h1>

}

  cubeImage = new Image();

}

  componentDidMount() {

  return <h1>商品{router.query.name}page</h1>;

  }

    vLighting = ambientLight + (directionalLightColor * directional);

  return (

      <FormApp />

  }

  var m = Matrix.Rotation(inRadians, $V([v[0], v[1], v[2]])).ensure4x4();

    return;

    mvMatrixStack.push(m.dup());





    }



  }

function initTextures() {



$.ajax({

    return (

const About = () => {



    return;

  uniform highp mat4 uMVMatrix;

import { useRouter } from "next/router";

var hiddenBox = $( "#banner-message" );

    super(props);

  render() {

    return (

  handleChange(e) {

        </li>

      <div>

      seconds: state.seconds + 1

  handleChange(e) {

      zIncValue = -zIncValue;



  attribute highp vec2 aTextureCoord;

  }

  console.log(router.query)



export default function Name() {

  gl.texImage2D(gl.TEXTURE_2D, 0, gl.RGBA, gl.RGBA, gl.UNSIGNED_BYTE, image);

    gl_Position = uPMatrix * uMVMatrix * vec4(aVertexPosition, 1.0);

    squareXOffset += xIncValue * ((30 * delta) / 1000.0);

normalMatrix = normalMatrix.transpose();

    super(props);



$( "#button-container button" ).on( "click", function( event ) {

}

}



class Timer extends React.Component {

    return;





import { FormApp } from './FormApp';

import Link from "next/link";

    }

$.ajax({

    this.setState(state => ({

  multMatrix(m);

}

    zipcode: 97201

      <div>

        <h3>TODO</h3>

          <Link href="/about">

  }

  const router = useRouter();

    );





  }



var nUniform = gl.getUniformLocation(shaderProgram, "uNormalMatrix");

    }));

</script>

            <a>About</a>

  attribute highp vec2 aTextureCoord;



export default function Color() {

    this.handleChange = this.handleChange.bind(this);

        <form onSubmit={this.handleSubmit}>

  }



    zipcode: 97201

        <h3>TODO</h3>



);

      yIncValue = -yIncValue;



  const router = useRouter();

const About = () => {

    this.state = { items: [], text: '' };

  render() {



  }

export default App;



  gl.bindTexture(gl.TEXTURE_2D, null);

    this.setState({ value: e.target.value });

export default About



    squareZOffset += zIncValue * ((30 * delta) / 1000.0);



  const router = useRouter();

  render() {

  cubeImage.src = "cubetexture.png";





  if (m) {

  constructor(props) {

  attribute highp vec2 aTextureCoord;

    highp vec4 transformedNormal = uNormalMatrix * vec4(aVertexNormal, 1.0);

  render() {

  }

    super(props);



  var m = Matrix.Rotation(inRadians, $V([v[0], v[1], v[2]])).ensure4x4();

  mvMatrix = mvMatrixStack.pop();

export default App;

}

  }

}
  if (m) {



  }

}

  }

  constructor(props) {

    squareYOffset += yIncValue * ((30 * delta) / 1000.0);

    vTextureCoord = aTextureCoord;

  gl.bindTexture(gl.TEXTURE_2D, null);

  gl.texImage2D(gl.TEXTURE_2D, 0, gl.RGBA, gl.RGBA, gl.UNSIGNED_BYTE, image);

export default About

  mvMatrix = mvMatrixStack.pop();

  return (

  uniform highp mat4 uPMatrix;

  }

ReactDOM.render(

    }

    );

}



  render() {

  render() {

  }

function mvPushMatrix(m) {

      yIncValue = -yIncValue;

    if (Math.abs(squareYOffset) > 2.5) {

    mvMatrixStack.push(m.dup());

  uniform highp mat4 uPMatrix;

        <h3>TODO</h3>

  gl.generateMipmap(gl.TEXTURE_2D);

  return <h1>商品{router.query.name}page</h1>;

  } else {

  }

}

function handleTextureLoaded(image, texture) {



}

}

  }

const About = () => {

          <label htmlFor="new-todo">

    this.state = { seconds: 0 };

  const router = useRouter();

  cubeImage.onload = function() { handleTextureLoaded(cubeImage, cubeTexture); }

    <h1>About Page</h1>

    $( "#weather-temp" ).html( "<strong>" + result + "</strong> degrees" );

export default function Color() {

      <h1>Hello world</h1>





class Timer extends React.Component {

  }

    gl_Position = uPMatrix * uMVMatrix * vec4(aVertexPosition, 1.0);

class Timer extends React.Component {

    highp float directional = max(dot(transformedNormal.xyz, directionalVector), 0.0);

    if (Math.abs(squareYOffset) > 2.5) {



ReactDOM.render(

      seconds: state.seconds + 1

    zipcode: 97201

  cubeImage.src = "cubetexture.png";

    $( "#weather-temp" ).html( "<strong>" + result + "</strong> degrees" );

}

  }

  }

      <FormApp />



    <h1>About Page</h1>

    <h1>About Page</h1>

  varying highp vec3 vLighting;

    this.state = { seconds: 0 };

var nUniform = gl.getUniformLocation(shaderProgram, "uNormalMatrix");





import React, { Component } from 'react';

  constructor(props) {

  }

  )

var nUniform = gl.getUniformLocation(shaderProgram, "uNormalMatrix");



import { useRouter } from "next/router";

export default About

  gl.texImage2D(gl.TEXTURE_2D, 0, gl.RGBA, gl.RGBA, gl.UNSIGNED_BYTE, image);

      <FormApp />

ReactDOM.render(

  return (





  cubeImage.src = "cubetexture.png";

export default About

  }

  }

    );

  <App />,

    if (Math.abs(squareYOffset) > 2.5) {

  }

  uniform highp mat4 uMVMatrix;

  getRawMarkup() {

    );





  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MIN_FILTER, gl.LINEAR_MIPMAP_NEAREST);

    this.setState(state => ({

  }

      yIncValue = -yIncValue;

    vLighting = ambientLight + (directionalLightColor * directional);

  return (

    </div>

  mvMatrix = mvMatrixStack.pop();

        <li>

    return (

function mvPushMatrix(m) {

);

    vTextureCoord = aTextureCoord;



  constructor(props) {

  render() {





  )

  constructor(props) {

  constructor(props) {

  render() {

}



    this.state = { seconds: 0 };

  const canvas = document.querySelector("#glCanvas");

// Arrow function

function mvPopMatrix() {

}

    gl_Position = uPMatrix * uMVMatrix * vec4(aVertexPosition, 1.0);

const About = () => {

    this.state = { seconds: 0 };

    super(props);

  } else {

function mvPopMatrix() {

var mvMatrixStack = [];

    this.setState({ value: e.target.value });

    );

});

var hiddenBox = $( "#banner-message" );



  }

  const router = useRouter();

      <h1>Hello world</h1>

  }



    super(props);



    );

  }

  )

export default About

  return (

window.onload = main;

function mvPushMatrix(m) {

        <form onSubmit={this.handleSubmit}>

  const router = useRouter();

export default About



}

  }

class Timer extends React.Component {

    highp vec3 ambientLight = vec3(0.6, 0.6, 0.6);

      <ul>

    highp vec3 directionalLightColor = vec3(0.5, 0.5, 0.75);

    mvMatrixStack.push(mvMatrix.dup());

    );

    vTextureCoord = aTextureCoord;

normalMatrix = normalMatrix.transpose();

  render() {



  )

class Timer extends React.Component {

  constructor(props) {

  }

  const gl = canvas.getContext("webgl");

    if (Math.abs(squareYOffset) > 2.5) {

function main() {

  getRawMarkup() {

  )

    vTextureCoord = aTextureCoord;

function handleTextureLoaded(image, texture) {

<script id="shader-vs" type="x-shader/x-vertex">





  gl.texImage2D(gl.TEXTURE_2D, 0, gl.RGBA, gl.RGBA, gl.UNSIGNED_BYTE, image);

export default function Color() {

import React, { Component } from 'react';

function About() {

  gl.generateMipmap(gl.TEXTURE_2D);

  return (

export default About



const About = () => {

  cubeImage = new Image();

  const canvas = document.querySelector("#glCanvas");



  gl.clearColor(0.0, 0.0, 0.0, 1.0);

    this.state = { seconds: 0 };

    <h1>About Page</h1>

  cubeImage.src = "cubetexture.png";

  )



  const gl = canvas.getContext("webgl");

    highp float directional = max(dot(transformedNormal.xyz, directionalVector), 0.0);

    return (

    this.handleChange = this.handleChange.bind(this);



  if (m) {

// Arrow function



export default About

export default App;



}

  }

    highp float directional = max(dot(transformedNormal.xyz, directionalVector), 0.0);



        <li>

        <TodoList items={this.state.items} />



  void main(void) {

  }

  constructor(props) {

        </li>

class MarkdownEditor extends React.Component {



  render() {

  document.getElementById('root')

  } else {

  varying highp vec2 vTextureCoord;

    if (Math.abs(squareYOffset) > 2.5) {

  }





    this.handleSubmit = this.handleSubmit.bind(this);

export default function Name() {

  return (

  if (!mvMatrixStack.length) {

    <h1>About Page</h1>

    return (





  uniform highp mat4 uPMatrix;

            What needs to be done?

import { useRouter } from "next/router";



  );

  constructor(props) {



    mvMatrix = m.dup();



  }

  const gl = canvas.getContext("webgl");



function About() {

      zIncValue = -zIncValue;

    squareYOffset += yIncValue * ((30 * delta) / 1000.0);

      <FormApp />

function mvPushMatrix(m) {

  render() {

      seconds: state.seconds + 1



  return (

    mvMatrix = m.dup();

  constructor(props) {



          </Link>

    return (



    super(props);

        <form onSubmit={this.handleSubmit}>

class TodoApp extends React.Component {

  return <h1>{router.query.name}の{router.query.color}color</h1>;

      <h1>Hello Next.js</h1>

    if (Math.abs(squareYOffset) > 2.5) {

}

    this.md = new Remarkable();

$( "#button-container button" ).on( "click", function( event ) {

  var inRadians = angle * Math.PI / 180.0;

    highp vec3 directionalLightColor = vec3(0.5, 0.5, 0.75);

  gl.bindTexture(gl.TEXTURE_2D, null);

  )

var hiddenBox = $( "#banner-message" );

  }

export default function Home() {

    return (

import { FormApp } from './FormApp';

          <Link href="/about">

}


    super(props);

    return (

  varying highp vec3 vLighting;

  cubeTexture = gl.createTexture();

  data: {

    this.setState(state => ({



class App extends React.Component {





      <ul>

    this.handleChange = this.handleChange.bind(this);

    this.handleSubmit = this.handleSubmit.bind(this);

});

    mvMatrix = m.dup();

    this.handleChange = this.handleChange.bind(this);

      <h1>Hello Next.js</h1>



  componentDidMount() {

    this.handleChange = this.handleChange.bind(this);

  uniform highp mat4 uPMatrix;

  }

normalMatrix = normalMatrix.transpose();

const About = () => {

  uniform highp mat4 uMVMatrix;

      yIncValue = -yIncValue;

  return (

  )

  gl.texImage2D(gl.TEXTURE_2D, 0, gl.RGBA, gl.RGBA, gl.UNSIGNED_BYTE, image);

    this.handleChange = this.handleChange.bind(this);



  } else {

    <h1>About Page</h1>

    this.state = { seconds: 0 };

    return { __html: this.md.render(this.state.value) };

      <h1>Hello Next.js</h1>

  document.getElementById('root')



  multMatrix(m);

class Timer extends React.Component {

  gl.clear(gl.COLOR_BUFFER_BIT);

    this.handleChange = this.handleChange.bind(this);

    highp vec3 directionalVector = vec3(0.85, 0.8, 0.75);

  return <h1>{router.query.name}の{router.query.color}color</h1>;

      <FormApp />

  constructor(props) {

  handleChange(e) {

    <div>

  }

  data: {



var normalMatrix = mvMatrix.inverse();

  gl.clearColor(0.0, 0.0, 0.0, 1.0);



    vLighting = ambientLight + (directionalLightColor * directional);

class MarkdownEditor extends React.Component {

import Link from "next/link";

  const gl = canvas.getContext("webgl");

    }



  }

class Timer extends React.Component {

export default function Name() {

normalMatrix = normalMatrix.transpose();

ReactDOM.render(

  constructor(props) {

    highp vec4 transformedNormal = uNormalMatrix * vec4(aVertexNormal, 1.0);

<script id="shader-vs" type="x-shader/x-vertex">

  attribute highp vec3 aVertexNormal;

  tick() {

);

var mvMatrixStack = [];

  multMatrix(m);

  return mvMatrix;

    super(props);

  hiddenBox.show();



  const router = useRouter();

  }

  varying highp vec2 vTextureCoord;

}



    squareYOffset += yIncValue * ((30 * delta) / 1000.0);



    this.handleSubmit = this.handleSubmit.bind(this);

});

  attribute highp vec3 aVertexNormal;

    this.state = { value: 'Hello, **world**!' };

  )



  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MAG_FILTER, gl.LINEAR);



  attribute highp vec3 aVertexNormal;

  if (m) {

<script id="shader-vs" type="x-shader/x-vertex">

}

      <div>

    highp vec3 ambientLight = vec3(0.6, 0.6, 0.6);

var hiddenBox = $( "#banner-message" );

    if (Math.abs(squareYOffset) > 2.5) {

export default About



    super(props);

  }

    mvMatrixStack.push(m.dup());

  varying highp vec2 vTextureCoord;

  }



$.ajax({

  varying highp vec3 vLighting;

    this.state = { seconds: 0 };

  varying highp vec3 vLighting;

  )

  mvMatrix = mvMatrixStack.pop();

}

        <h3>TODO</h3>



  data: {

  const router = useRouter();

  }

  return (

  tick() {

  cubeImage.src = "cubetexture.png";





}

export default function Name() {

  }

class App extends Component {

import { FormApp } from './FormApp';



  gl.clearColor(0.0, 0.0, 0.0, 1.0);

      </ul>

}

    return;

    return;

    highp vec3 directionalLightColor = vec3(0.5, 0.5, 0.75);

  return (



  }

import { useRouter } from "next/router";

  const canvas = document.querySelector("#glCanvas");

    this.handleChange = this.handleChange.bind(this);



}

    <h1>About Page</h1>



  cubeImage = new Image();

  const router = useRouter();

function main() {

}

        <TodoList items={this.state.items} />

  const router = useRouter();

    this.md = new Remarkable();



    super(props);

  cubeImage.onload = function() { handleTextureLoaded(cubeImage, cubeTexture); }

  constructor(props) {

    <h1>About Page</h1>

        <TodoList items={this.state.items} />

var mvMatrixStack = [];



</script>

  mvMatrix = mvMatrixStack.pop();

});

      <div>



gl.uniformMatrix4fv(nUniform, false, new WebGLFloatArray(normalMatrix.flatten()));

normalMatrix = normalMatrix.transpose();

class TodoApp extends React.Component {

function initTextures() {



  void main(void) {

    );

}

      <FormApp />

  const canvas = document.querySelector("#glCanvas");

  mvMatrix = mvMatrixStack.pop();

  if (m) {

    return (

    );

  },

    zipcode: 97201

  } else {

function main() {

    return { __html: this.md.render(this.state.value) };

    super(props);

  componentDidMount() {

normalMatrix = normalMatrix.transpose();

  attribute highp vec2 aTextureCoord;

    this.handleChange = this.handleChange.bind(this);

    highp vec4 transformedNormal = uNormalMatrix * vec4(aVertexNormal, 1.0);



    squareXOffset += xIncValue * ((30 * delta) / 1000.0);

    if (Math.abs(squareYOffset) > 2.5) {

  success: function( result ) {

    this.interval = setInterval(() => this.tick(), 1000);

import Link from "next/link";

}

  const canvas = document.querySelector("#glCanvas");

$.ajax({

  }

  hiddenBox.show();



    this.interval = setInterval(() => this.tick(), 1000);

  const canvas = document.querySelector("#glCanvas");

var nUniform = gl.getUniformLocation(shaderProgram, "uNormalMatrix");

    vLighting = ambientLight + (directionalLightColor * directional);

            <a>About</a>

normalMatrix = normalMatrix.transpose();

  },



    return (



    vTextureCoord = aTextureCoord;

  gl.clearColor(0.0, 0.0, 0.0, 1.0);

    }

    <h1>About Page</h1>

class App extends React.Component {

  )

export default About

  multMatrix(m);

  mvMatrix = mvMatrixStack.pop();

          </Link>

export default App;

}

  )



  }

import React, { Component } from 'react';

    this.interval = setInterval(() => this.tick(), 1000);

    zipcode: 97201

  console.log(router.query)

  uniform highp mat4 uNormalMatrix;





  constructor(props) {

});

    <h1>About Page</h1>

  const gl = canvas.getContext("webgl");

}

window.onload = main;

  gl.generateMipmap(gl.TEXTURE_2D);

  render() {



var mvMatrixStack = [];

import { FormApp } from './FormApp';

$( "#button-container button" ).on( "click", function( event ) {

}

    return;

}

    $( "#weather-temp" ).html( "<strong>" + result + "</strong> degrees" );

          <label htmlFor="new-todo">

}



  mvMatrix = mvMatrixStack.pop();

    return;

    <h1>About Page</h1>

var nUniform = gl.getUniformLocation(shaderProgram, "uNormalMatrix");

  }





  return mvMatrix;

    this.interval = setInterval(() => this.tick(), 1000);

      xIncValue = -xIncValue;

  cubeImage.onload = function() { handleTextureLoaded(cubeImage, cubeTexture); }

  return <h1>{router.query.name}の{router.query.color}color</h1>;

  tick() {



  mvMatrix = mvMatrixStack.pop();

  mvMatrix = mvMatrixStack.pop();

var mvMatrixStack = [];

  return (

  gl.bindTexture(gl.TEXTURE_2D, null);

  },

  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MAG_FILTER, gl.LINEAR);

}

  cubeImage.src = "cubetexture.png";

      <h1>Hello world</h1>

  getRawMarkup() {



<script id="shader-vs" type="x-shader/x-vertex">

}

        </li>

    squareYOffset += yIncValue * ((30 * delta) / 1000.0);

    <div>



  if (gl === null) {

var nUniform = gl.getUniformLocation(shaderProgram, "uNormalMatrix");

          </Link>

    this.state = { value: 'Hello, **world**!' };





      seconds: state.seconds + 1

export default function Name() {

    mvMatrix = m.dup();

  }

    super(props);

}
import Link from "next/link";

      </ul>

    this.setState(state => ({

    gl_Position = uPMatrix * uMVMatrix * vec4(aVertexPosition, 1.0);

    highp vec4 transformedNormal = uNormalMatrix * vec4(aVertexNormal, 1.0);

  }

});

  <App />,



  cubeTexture = gl.createTexture();

  gl.bindTexture(gl.TEXTURE_2D, null);

  mvMatrix = mvMatrixStack.pop();

  const router = useRouter();

}

  constructor(props) {

  const canvas = document.querySelector("#glCanvas");

    </div>

  var m = Matrix.Rotation(inRadians, $V([v[0], v[1], v[2]])).ensure4x4();

function mvPopMatrix() {

  const gl = canvas.getContext("webgl");

        <h3>TODO</h3>

function mvRotate(angle, v) {

    return (

      zIncValue = -zIncValue;

class MarkdownEditor extends React.Component {



    super(props);

    this.setState({ value: e.target.value });

  );

}

    super(props);



    }));

  getRawMarkup() {

  gl.bindTexture(gl.TEXTURE_2D, null);

  }

        <h3>TODO</h3>

      <h1>Hello Next.js</h1>

  }

  );

import { FormApp } from './FormApp';

}

    }));

    squareZOffset += zIncValue * ((30 * delta) / 1000.0);

}

  attribute highp vec3 aVertexNormal;

  gl.clearColor(0.0, 0.0, 0.0, 1.0);





      xIncValue = -xIncValue;

import { useRouter } from "next/router";

  render() {

  attribute highp vec3 aVertexPosition;

  tick() {

  console.log(router.query)

const About = () => {

  render() {

  <App />,

  }

    return { __html: this.md.render(this.state.value) };

window.onload = main;



    highp vec3 ambientLight = vec3(0.6, 0.6, 0.6);

  );

function initTextures() {

        </li>



    this.setState({ value: e.target.value });

      yIncValue = -yIncValue;

}



import Link from "next/link";

  }

  gl.generateMipmap(gl.TEXTURE_2D);



    mvMatrixStack.push(mvMatrix.dup());

    $( "#weather-temp" ).html( "<strong>" + result + "</strong> degrees" );

    <h1>About Page</h1>

  }

    highp vec3 directionalLightColor = vec3(0.5, 0.5, 0.75);

  }

      zIncValue = -zIncValue;





      seconds: state.seconds + 1

  attribute highp vec3 aVertexNormal;

    );

          <Link href="/about">

  }



          <label htmlFor="new-todo">

  if (m) {

class Timer extends React.Component {

}

    zipcode: 97201



  }

    this.state = { seconds: 0 };

  }

  gl.bindTexture(gl.TEXTURE_2D, texture);



ReactDOM.render(

  return (

    highp float directional = max(dot(transformedNormal.xyz, directionalVector), 0.0);

  gl.generateMipmap(gl.TEXTURE_2D);

class Timer extends React.Component {

  } else {

        <TodoList items={this.state.items} />





import { useRouter } from "next/router";

    );

}

  handleChange(e) {

  uniform highp mat4 uNormalMatrix;

      zIncValue = -zIncValue;



    mvMatrixStack.push(mvMatrix.dup());

    super(props);

      seconds: state.seconds + 1



  multMatrix(m);

function mvRotate(angle, v) {

  constructor(props) {







  }

      <div>

  attribute highp vec3 aVertexPosition;

  }

function handleTextureLoaded(image, texture) {

var normalMatrix = mvMatrix.inverse();

import React, { Component } from 'react';



  }

    this.state = { items: [], text: '' };

}

      <ul>



    </div>

    zipcode: 97201

  cubeImage.onload = function() { handleTextureLoaded(cubeImage, cubeTexture); }



    }));



    if (Math.abs(squareYOffset) > 2.5) {



  gl.bindTexture(gl.TEXTURE_2D, null);

    this.handleChange = this.handleChange.bind(this);

    mvMatrixStack.push(mvMatrix.dup());

  constructor(props) {

  console.log(router.query)

  }

  }

export default function Home() {

    zipcode: 97201

  )

  );

          <Link href="/about">

    squareZOffset += zIncValue * ((30 * delta) / 1000.0);

    this.handleSubmit = this.handleSubmit.bind(this);

import React, { Component } from 'react';

  cubeImage.src = "cubetexture.png";

  return <h1>{router.query.name}の{router.query.color}color</h1>;

  }

            <a>About</a>

}

  }

normalMatrix = normalMatrix.transpose();

  handleChange(e) {

  gl.bindTexture(gl.TEXTURE_2D, texture);

        <form onSubmit={this.handleSubmit}>

var nUniform = gl.getUniformLocation(shaderProgram, "uNormalMatrix");

    super(props);

            <a>About</a>

      <h1>Hello world</h1>



  }

  }

  render() {

  url: "/api/getWeather",

  var m = Matrix.Rotation(inRadians, $V([v[0], v[1], v[2]])).ensure4x4();

  }

gl.uniformMatrix4fv(nUniform, false, new WebGLFloatArray(normalMatrix.flatten()));

normalMatrix = normalMatrix.transpose();

    highp vec3 directionalVector = vec3(0.85, 0.8, 0.75);

          </Link>



      <h1>Hello Next.js</h1>

    super(props);





  varying highp vec2 vTextureCoord;



  }

  render() {

    super(props);

    mvMatrixStack.push(mvMatrix.dup());

    $( "#weather-temp" ).html( "<strong>" + result + "</strong> degrees" );

}



</script>



  }

}

}
  }

  const canvas = document.querySelector("#glCanvas");

    this.handleChange = this.handleChange.bind(this);

  const gl = canvas.getContext("webgl");

    return;

);

  hiddenBox.show();

    this.state = { seconds: 0 };

  <App />,

          </Link>

export default App;

  if (gl === null) {



    }));

    this.setState({ value: e.target.value });

function initTextures() {

  }

normalMatrix = normalMatrix.transpose();

    mvMatrixStack.push(m.dup());



    $( "#weather-temp" ).html( "<strong>" + result + "</strong> degrees" );



  }

    super(props);

var nUniform = gl.getUniformLocation(shaderProgram, "uNormalMatrix");



    squareZOffset += zIncValue * ((30 * delta) / 1000.0);





import { useRouter } from "next/router";

    return (

var hiddenBox = $( "#banner-message" );

    this.setState({ value: e.target.value });



    this.setState({ value: e.target.value });



        <TodoList items={this.state.items} />

  return (

  return (

    squareZOffset += zIncValue * ((30 * delta) / 1000.0);

  }

        <h3>TODO</h3>

  attribute highp vec3 aVertexNormal;



    this.state = { seconds: 0 };

  render() {

export default function Home() {

        <h3>TODO</h3>

  void main(void) {

  const canvas = document.querySelector("#glCanvas");

  mvMatrix = mvMatrixStack.pop();

    this.md = new Remarkable();

  componentDidMount() {



  return (

function handleTextureLoaded(image, texture) {

function main() {



    super(props);





    zipcode: 97201

var normalMatrix = mvMatrix.inverse();

    vTextureCoord = aTextureCoord;

  document.getElementById('root')

  cubeTexture = gl.createTexture();

  }

}

ReactDOM.render(



  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MAG_FILTER, gl.LINEAR);

  } else {

    this.handleChange = this.handleChange.bind(this);





var normalMatrix = mvMatrix.inverse();

function handleTextureLoaded(image, texture) {

    mvMatrixStack.push(mvMatrix.dup());

    this.md = new Remarkable();

    if (Math.abs(squareYOffset) > 2.5) {

    );

    if (Math.abs(squareYOffset) > 2.5) {

    this.state = { items: [], text: '' };

          </Link>



}

        <li>

  gl.bindTexture(gl.TEXTURE_2D, null);

          <Link href="/about">

}

  }

  var inRadians = angle * Math.PI / 180.0;

class TodoApp extends React.Component {

  attribute highp vec2 aTextureCoord;

}

      <div>

  tick() {

    this.handleChange = this.handleChange.bind(this);

  }

    <div>

    this.interval = setInterval(() => this.tick(), 1000);



  var inRadians = angle * Math.PI / 180.0;

  handleChange(e) {

}

    <h1>About Page</h1>

  gl.clearColor(0.0, 0.0, 0.0, 1.0);



function mvPopMatrix() {

        <form onSubmit={this.handleSubmit}>

  }



  attribute highp vec2 aTextureCoord;

    this.state = { seconds: 0 };

    );

import React, { Component } from 'react';

    <h1>About Page</h1>

      <FormApp />

export default App;





  }

$.ajax({

    this.handleSubmit = this.handleSubmit.bind(this);

var nUniform = gl.getUniformLocation(shaderProgram, "uNormalMatrix");

var nUniform = gl.getUniformLocation(shaderProgram, "uNormalMatrix");

    highp vec3 ambientLight = vec3(0.6, 0.6, 0.6);

function handleTextureLoaded(image, texture) {

  varying highp vec2 vTextureCoord;

        <li>

  componentDidMount() {



    vTextureCoord = aTextureCoord;

    this.handleChange = this.handleChange.bind(this);

    highp vec3 directionalLightColor = vec3(0.5, 0.5, 0.75);

  render() {

}

  }

      <div>

});

  }

}

          <Link href="/about">

  data: {

      zIncValue = -zIncValue;

var normalMatrix = mvMatrix.inverse();

    }));

    this.interval = setInterval(() => this.tick(), 1000);

var mvMatrixStack = [];

  cubeTexture = gl.createTexture();

  gl.clear(gl.COLOR_BUFFER_BIT);

  cubeImage = new Image();

ReactDOM.render(



}
    if (Math.abs(squareYOffset) > 2.5) {

  document.getElementById('root')

  return mvMatrix;

  gl.clearColor(0.0, 0.0, 0.0, 1.0);



export default About

  if (gl === null) {



      seconds: state.seconds + 1

  return <h1>{router.query.name}の{router.query.color}color</h1>;

    );

  uniform highp mat4 uMVMatrix;

});

          <Link href="/about">

    squareZOffset += zIncValue * ((30 * delta) / 1000.0);

          </Link>

  console.log(router.query)

  }

  );

function handleTextureLoaded(image, texture) {

  }

    this.handleChange = this.handleChange.bind(this);

class MarkdownEditor extends React.Component {



  }

  }

  )

      yIncValue = -yIncValue;

class App extends React.Component {

import Link from "next/link";

$.ajax({



  gl.bindTexture(gl.TEXTURE_2D, null);

  cubeImage.onload = function() { handleTextureLoaded(cubeImage, cubeTexture); }

  attribute highp vec3 aVertexNormal;

    this.handleChange = this.handleChange.bind(this);

          <label htmlFor="new-todo">

  )

window.onload = main;

var nUniform = gl.getUniformLocation(shaderProgram, "uNormalMatrix");

  return <h1>商品{router.query.name}page</h1>;



  document.getElementById('root')

  var m = Matrix.Rotation(inRadians, $V([v[0], v[1], v[2]])).ensure4x4();

      zIncValue = -zIncValue;

      <h1>Hello Next.js</h1>

        </li>

        <h3>TODO</h3>

  getRawMarkup() {

    );

  url: "/api/getWeather",

    this.md = new Remarkable();



    this.md = new Remarkable();



      zIncValue = -zIncValue;



window.onload = main;

  uniform highp mat4 uPMatrix;

  varying highp vec3 vLighting;



}

    return (

        <TodoList items={this.state.items} />

window.onload = main;

    this.handleChange = this.handleChange.bind(this);

}



gl.uniformMatrix4fv(nUniform, false, new WebGLFloatArray(normalMatrix.flatten()));

    <div>

    $( "#weather-temp" ).html( "<strong>" + result + "</strong> degrees" );

  }

  var inRadians = angle * Math.PI / 180.0;



}



  if (m) {





  url: "/api/getWeather",

    if (Math.abs(squareYOffset) > 2.5) {

export default function Color() {

  success: function( result ) {

    highp vec3 ambientLight = vec3(0.6, 0.6, 0.6);

    this.setState(state => ({

  tick() {

normalMatrix = normalMatrix.transpose();

    this.setState({ value: e.target.value });

  }

  }

  const gl = canvas.getContext("webgl");



  const router = useRouter();



  attribute highp vec2 aTextureCoord;

      <FormApp />

export default function Home() {

    vLighting = ambientLight + (directionalLightColor * directional);

export default App;

}
      yIncValue = -yIncValue;

        <h3>TODO</h3>

  }



gl.uniformMatrix4fv(nUniform, false, new WebGLFloatArray(normalMatrix.flatten()));

    highp vec3 ambientLight = vec3(0.6, 0.6, 0.6);

    squareXOffset += xIncValue * ((30 * delta) / 1000.0);

  }

            What needs to be done?



  }



  constructor(props) {

class Timer extends React.Component {

gl.uniformMatrix4fv(nUniform, false, new WebGLFloatArray(normalMatrix.flatten()));

    this.interval = setInterval(() => this.tick(), 1000);

            What needs to be done?

    return (

            What needs to be done?

  gl.clearColor(0.0, 0.0, 0.0, 1.0);

    return (

  tick() {

function mvRotate(angle, v) {

window.onload = main;

    </div>

import { FormApp } from './FormApp';

  varying highp vec3 vLighting;

$.ajax({

    zipcode: 97201

        <li>

    return (

}



    squareZOffset += zIncValue * ((30 * delta) / 1000.0);





  return (

  }

  if (gl === null) {

  }

class MarkdownEditor extends React.Component {

  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MAG_FILTER, gl.LINEAR);

  }



  }



import { useRouter } from "next/router";

import React, { Component } from 'react';



    }));

$( "#button-container button" ).on( "click", function( event ) {

            <a>About</a>

gl.uniformMatrix4fv(nUniform, false, new WebGLFloatArray(normalMatrix.flatten()));

class App extends Component {

  }



      yIncValue = -yIncValue;

  }

        <h3>TODO</h3>

  )

class TodoApp extends React.Component {

  constructor(props) {





});



  return mvMatrix;

  } else {

$( "#button-container button" ).on( "click", function( event ) {

  hiddenBox.show();

  render() {



$.ajax({

    return { __html: this.md.render(this.state.value) };

    return { __html: this.md.render(this.state.value) };

    return (

  cubeTexture = gl.createTexture();

  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MIN_FILTER, gl.LINEAR_MIPMAP_NEAREST);

    highp vec3 directionalVector = vec3(0.85, 0.8, 0.75);

  if (!mvMatrixStack.length) {

  },

}

        </li>



  const canvas = document.querySelector("#glCanvas");

  componentDidMount() {

}

    return (

class MarkdownEditor extends React.Component {

$.ajax({

  const router = useRouter();



        <h3>TODO</h3>

    this.setState(state => ({

  constructor(props) {

});

  constructor(props) {

    super(props);

}

}



});

function main() {



        <h3>TODO</h3>

  },

  const canvas = document.querySelector("#glCanvas");

  },

gl.uniformMatrix4fv(nUniform, false, new WebGLFloatArray(normalMatrix.flatten()));

    $( "#weather-temp" ).html( "<strong>" + result + "</strong> degrees" );

    );

import { useRouter } from "next/router";



    this.state = { seconds: 0 };

      xIncValue = -xIncValue;

    this.state = { items: [], text: '' };

  }

    );

      seconds: state.seconds + 1

  varying highp vec2 vTextureCoord;

  return (

export default function Name() {

  gl.clearColor(0.0, 0.0, 0.0, 1.0);

  multMatrix(m);



    );

function mvRotate(angle, v) {

  if (!mvMatrixStack.length) {

  data: {

  cubeImage.onload = function() { handleTextureLoaded(cubeImage, cubeTexture); }

);

import { useRouter } from "next/router";

  }

  uniform highp mat4 uPMatrix;



// Arrow function

}

    highp vec3 directionalVector = vec3(0.85, 0.8, 0.75);

    </div>

import { FormApp } from './FormApp';

  }

  }

    vLighting = ambientLight + (directionalLightColor * directional);

var mvMatrixStack = [];



        <TodoList items={this.state.items} />

  gl.bindTexture(gl.TEXTURE_2D, texture);

  }

  render() {

  cubeImage = new Image();

export default function Color() {

        <li>

    }

    squareXOffset += xIncValue * ((30 * delta) / 1000.0);



      <h1>Hello Next.js</h1>

    highp vec3 ambientLight = vec3(0.6, 0.6, 0.6);

  render() {





    highp vec3 ambientLight = vec3(0.6, 0.6, 0.6);



  gl.clear(gl.COLOR_BUFFER_BIT);

  }

    this.state = { seconds: 0 };

import Link from "next/link";

    this.state = { value: 'Hello, **world**!' };

    return (

    squareXOffset += xIncValue * ((30 * delta) / 1000.0);

}

function main() {

gl.uniformMatrix4fv(nUniform, false, new WebGLFloatArray(normalMatrix.flatten()));

  data: {

  )

    }

      <h1>Hello Next.js</h1>

    this.setState({ value: e.target.value });

  return (

          </Link>

    <div>

          <Link href="/about">

  componentDidMount() {

export default function Name() {

function handleTextureLoaded(image, texture) {







    squareXOffset += xIncValue * ((30 * delta) / 1000.0);

    super(props);

            <a>About</a>

  handleChange(e) {



    super(props);

          </Link>

  const router = useRouter();



import Link from "next/link";

    vTextureCoord = aTextureCoord;

class Timer extends React.Component {

class TodoApp extends React.Component {

    </div>

}

import Link from "next/link";

            What needs to be done?



  gl.bindTexture(gl.TEXTURE_2D, null);

);

    if (Math.abs(squareYOffset) > 2.5) {



  cubeImage.onload = function() { handleTextureLoaded(cubeImage, cubeTexture); }



  }

    mvMatrixStack.push(m.dup());



  gl.texImage2D(gl.TEXTURE_2D, 0, gl.RGBA, gl.RGBA, gl.UNSIGNED_BYTE, image);



  getRawMarkup() {

  cubeImage.onload = function() { handleTextureLoaded(cubeImage, cubeTexture); }

const About = () => {

      <h1>Hello world</h1>



  uniform highp mat4 uNormalMatrix;



  if (m) {



  var m = Matrix.Rotation(inRadians, $V([v[0], v[1], v[2]])).ensure4x4();

gl.uniformMatrix4fv(nUniform, false, new WebGLFloatArray(normalMatrix.flatten()));

  constructor(props) {

          <Link href="/about">

  return mvMatrix;

function handleTextureLoaded(image, texture) {

class TodoApp extends React.Component {

  gl.bindTexture(gl.TEXTURE_2D, texture);

  success: function( result ) {

<script id="shader-vs" type="x-shader/x-vertex">

      seconds: state.seconds + 1

        <form onSubmit={this.handleSubmit}>

    this.state = { items: [], text: '' };

  gl.bindTexture(gl.TEXTURE_2D, texture);

      <h1>Hello world</h1>

window.onload = main;

    return (

  )



  constructor(props) {

  return (

  }

      yIncValue = -yIncValue;

        <li>

function mvRotate(angle, v) {

function mvPopMatrix() {

function handleTextureLoaded(image, texture) {

  return (

    this.handleChange = this.handleChange.bind(this);

  var m = Matrix.Rotation(inRadians, $V([v[0], v[1], v[2]])).ensure4x4();

    vLighting = ambientLight + (directionalLightColor * directional);



    return (



  varying highp vec3 vLighting;



  return (



    this.state = { items: [], text: '' };

            What needs to be done?

    gl_Position = uPMatrix * uMVMatrix * vec4(aVertexPosition, 1.0);

    highp vec4 transformedNormal = uNormalMatrix * vec4(aVertexNormal, 1.0);



class Timer extends React.Component {

  getRawMarkup() {

export default function Home() {

  render() {

export default function Name() {

import Link from "next/link";

      <h1>Hello Next.js</h1>

    }

    vLighting = ambientLight + (directionalLightColor * directional);

import { FormApp } from './FormApp';

export default About

  cubeImage = new Image();

  },

  }





import React, { Component } from 'react';

  return <h1>商品{router.query.name}page</h1>;

normalMatrix = normalMatrix.transpose();

  if (!mvMatrixStack.length) {

          <Link href="/about">



    this.handleSubmit = this.handleSubmit.bind(this);

});

    vTextureCoord = aTextureCoord;

);

class App extends Component {



ReactDOM.render(

}

  const router = useRouter();

  gl.clearColor(0.0, 0.0, 0.0, 1.0);

  render() {

</script>



    super(props);

  const router = useRouter();

  multMatrix(m);

    zipcode: 97201

  const canvas = document.querySelector("#glCanvas");

  handleChange(e) {





class App extends Component {

    );

          <Link href="/about">

  cubeImage = new Image();





}

class Timer extends React.Component {

    this.state = { value: 'Hello, **world**!' };



  constructor(props) {

  mvMatrix = mvMatrixStack.pop();

ReactDOM.render(

  return (

}

    this.handleChange = this.handleChange.bind(this);

}

  hiddenBox.show();

      seconds: state.seconds + 1

  tick() {

  }

        <form onSubmit={this.handleSubmit}>

  gl.bindTexture(gl.TEXTURE_2D, texture);

    highp vec3 directionalLightColor = vec3(0.5, 0.5, 0.75);

  <App />,

    </div>

  uniform highp mat4 uNormalMatrix;

  cubeImage.src = "cubetexture.png";

class App extends Component {

    this.state = { value: 'Hello, **world**!' };

const About = () => {

  const router = useRouter();

  return mvMatrix;

  render() {

  )

  )

  }

  }

  }

  success: function( result ) {



            What needs to be done?





    <div>

  }

}

  constructor(props) {

  return (

    vLighting = ambientLight + (directionalLightColor * directional);







export default App;

    this.state = { items: [], text: '' };

  render() {

    highp float directional = max(dot(transformedNormal.xyz, directionalVector), 0.0);

  }



import { FormApp } from './FormApp';

      seconds: state.seconds + 1

  render() {

  gl.clearColor(0.0, 0.0, 0.0, 1.0);





class TodoApp extends React.Component {

function main() {

            What needs to be done?

function mvPopMatrix() {

import { useRouter } from "next/router";

        </li>



  },

  render() {

    zipcode: 97201

  document.getElementById('root')

var nUniform = gl.getUniformLocation(shaderProgram, "uNormalMatrix");

  cubeImage.onload = function() { handleTextureLoaded(cubeImage, cubeTexture); }





    squareZOffset += zIncValue * ((30 * delta) / 1000.0);

normalMatrix = normalMatrix.transpose();

  handleChange(e) {

class TodoApp extends React.Component {

  }

    return { __html: this.md.render(this.state.value) };

<script id="shader-vs" type="x-shader/x-vertex">

});

import Link from "next/link";

      xIncValue = -xIncValue;

  return (

import Link from "next/link";

  varying highp vec2 vTextureCoord;

  data: {

    this.setState({ value: e.target.value });

  void main(void) {

class Timer extends React.Component {

  }

  if (m) {





}




          </Link>

  }

  render() {

export default About

    super(props);

</script>



}





  }

    this.setState(state => ({

import { useRouter } from "next/router";

  }

    );

  }



    zipcode: 97201

}

}



    super(props);

function handleTextureLoaded(image, texture) {

    if (Math.abs(squareYOffset) > 2.5) {



}

function mvPopMatrix() {

    this.setState({ value: e.target.value });

  success: function( result ) {

    highp float directional = max(dot(transformedNormal.xyz, directionalVector), 0.0);

  }

    <div>

function main() {



  gl.generateMipmap(gl.TEXTURE_2D);

  const router = useRouter();

import { FormApp } from './FormApp';

  varying highp vec3 vLighting;

    }));

  varying highp vec3 vLighting;

    this.handleSubmit = this.handleSubmit.bind(this);

    }

  if (!mvMatrixStack.length) {



          <Link href="/about">

  data: {





    super(props);

}

function mvRotate(angle, v) {

  return (

  document.getElementById('root')

    super(props);

  gl.bindTexture(gl.TEXTURE_2D, texture);



  attribute highp vec2 aTextureCoord;

  }

  multMatrix(m);



import { FormApp } from './FormApp';

    highp vec3 directionalLightColor = vec3(0.5, 0.5, 0.75);

  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MAG_FILTER, gl.LINEAR);

  constructor(props) {

      <div>

  cubeImage.src = "cubetexture.png";

export default function Name() {

    gl_Position = uPMatrix * uMVMatrix * vec4(aVertexPosition, 1.0);

    this.handleSubmit = this.handleSubmit.bind(this);

    if (Math.abs(squareYOffset) > 2.5) {

function About() {



  }

  if (m) {

    squareZOffset += zIncValue * ((30 * delta) / 1000.0);

function mvRotate(angle, v) {

      <FormApp />

      <h1>Hello Next.js</h1>

  document.getElementById('root')

function mvRotate(angle, v) {

          <Link href="/about">

    this.setState({ value: e.target.value });

export default function Name() {

  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MIN_FILTER, gl.LINEAR_MIPMAP_NEAREST);

}

gl.uniformMatrix4fv(nUniform, false, new WebGLFloatArray(normalMatrix.flatten()));



}

        <form onSubmit={this.handleSubmit}>

export default App;

  <App />,

    super(props);

  } else {

  return mvMatrix;

    return (

  const canvas = document.querySelector("#glCanvas");

    }));

  uniform highp mat4 uMVMatrix;

var hiddenBox = $( "#banner-message" );

  url: "/api/getWeather",

function mvPopMatrix() {



    this.handleChange = this.handleChange.bind(this);



      <div>

window.onload = main;



  if (gl === null) {

  render() {

}

            What needs to be done?

    return;

ReactDOM.render(

  const canvas = document.querySelector("#glCanvas");

  getRawMarkup() {

  success: function( result ) {

  constructor(props) {

export default About

            What needs to be done?

      zIncValue = -zIncValue;

    </div>

        <li>

  }

  cubeImage = new Image();

  },

import React, { Component } from 'react';

    }));

  gl.clearColor(0.0, 0.0, 0.0, 1.0);

  var inRadians = angle * Math.PI / 180.0;

}

  if (m) {

  mvMatrix = mvMatrixStack.pop();

  return (

export default App;

function mvPushMatrix(m) {

class App extends React.Component {

  uniform highp mat4 uPMatrix;

$.ajax({

  varying highp vec2 vTextureCoord;

  }

      <h1>Hello world</h1>

  return (

  }

window.onload = main;

class MarkdownEditor extends React.Component {

      yIncValue = -yIncValue;

);



class Timer extends React.Component {



      <ul>

      <FormApp />

}



    highp vec3 directionalLightColor = vec3(0.5, 0.5, 0.75);

export default About

import React, { Component } from 'react';

      </ul>

export default function Color() {

  const router = useRouter();

  gl.clear(gl.COLOR_BUFFER_BIT);

  }



  const canvas = document.querySelector("#glCanvas");



    if (Math.abs(squareYOffset) > 2.5) {

  return (





  gl.generateMipmap(gl.TEXTURE_2D);

}

  constructor(props) {

<script id="shader-vs" type="x-shader/x-vertex">

export default About

  }

  const gl = canvas.getContext("webgl");

class MarkdownEditor extends React.Component {

  render() {



import { FormApp } from './FormApp';

function initTextures() {

  }

  }

    this.setState({ value: e.target.value });

    return (

    super(props);

      yIncValue = -yIncValue;





function handleTextureLoaded(image, texture) {

}



  }

  constructor(props) {



  }



  render() {

    highp vec3 ambientLight = vec3(0.6, 0.6, 0.6);



}



  return (

});





    }));

  }

  document.getElementById('root')

      <ul>

class TodoApp extends React.Component {

    this.setState({ value: e.target.value });

  document.getElementById('root')

var mvMatrixStack = [];

        <h3>TODO</h3>

  success: function( result ) {

}

  varying highp vec3 vLighting;

  var inRadians = angle * Math.PI / 180.0;

    $( "#weather-temp" ).html( "<strong>" + result + "</strong> degrees" );



      seconds: state.seconds + 1

  }

function initTextures() {

      <div>

  document.getElementById('root')

var nUniform = gl.getUniformLocation(shaderProgram, "uNormalMatrix");

    this.handleChange = this.handleChange.bind(this);



    );

    highp vec4 transformedNormal = uNormalMatrix * vec4(aVertexNormal, 1.0);

gl.uniformMatrix4fv(nUniform, false, new WebGLFloatArray(normalMatrix.flatten()));

          </Link>

    this.setState({ value: e.target.value });

}

  gl.generateMipmap(gl.TEXTURE_2D);

</script>

  return (





    this.setState({ value: e.target.value });

    this.state = { items: [], text: '' };

  render() {

class TodoApp extends React.Component {

    this.state = { items: [], text: '' };

    return;

      <h1>Hello world</h1>

}

  }

          <Link href="/about">

function handleTextureLoaded(image, texture) {

}

  return (

    highp vec4 transformedNormal = uNormalMatrix * vec4(aVertexNormal, 1.0);

ReactDOM.render(

  constructor(props) {

function main() {

      yIncValue = -yIncValue;

export default App;



    gl_Position = uPMatrix * uMVMatrix * vec4(aVertexPosition, 1.0);





var nUniform = gl.getUniformLocation(shaderProgram, "uNormalMatrix");

    return (

}

  return <h1>{router.query.name}の{router.query.color}color</h1>;

class Timer extends React.Component {

}

  } else {

  cubeTexture = gl.createTexture();

  if (m) {



export default function Name() {





  var m = Matrix.Rotation(inRadians, $V([v[0], v[1], v[2]])).ensure4x4();

    return (

  gl.clear(gl.COLOR_BUFFER_BIT);

    mvMatrixStack.push(m.dup());

function initTextures() {

  var m = Matrix.Rotation(inRadians, $V([v[0], v[1], v[2]])).ensure4x4();

  url: "/api/getWeather",

  const gl = canvas.getContext("webgl");

      seconds: state.seconds + 1

  success: function( result ) {

  render() {



  constructor(props) {

    super(props);

window.onload = main;

  console.log(router.query)

export default function Color() {

  }

  cubeImage = new Image();

    zipcode: 97201





    highp vec3 directionalVector = vec3(0.85, 0.8, 0.75);

  varying highp vec3 vLighting;



    squareZOffset += zIncValue * ((30 * delta) / 1000.0);

    return (

    highp float directional = max(dot(transformedNormal.xyz, directionalVector), 0.0);

  varying highp vec2 vTextureCoord;

          <Link href="/about">

  }

  console.log(router.query)

  );







    this.state = { items: [], text: '' };

class App extends Component {

  return (

function initTextures() {



import Link from "next/link";

export default function Name() {

      <h1>Hello Next.js</h1>







    gl_Position = uPMatrix * uMVMatrix * vec4(aVertexPosition, 1.0);

      zIncValue = -zIncValue;

  }

    highp vec3 ambientLight = vec3(0.6, 0.6, 0.6);

    gl_Position = uPMatrix * uMVMatrix * vec4(aVertexPosition, 1.0);



function handleTextureLoaded(image, texture) {

  void main(void) {

      seconds: state.seconds + 1

    this.state = { value: 'Hello, **world**!' };

  tick() {

    vLighting = ambientLight + (directionalLightColor * directional);

    squareXOffset += xIncValue * ((30 * delta) / 1000.0);



      seconds: state.seconds + 1

});

function mvRotate(angle, v) {

  )

var mvMatrixStack = [];

    );



    return (

  attribute highp vec3 aVertexNormal;

      xIncValue = -xIncValue;

  }

  var m = Matrix.Rotation(inRadians, $V([v[0], v[1], v[2]])).ensure4x4();

}

export default About

});

    $( "#weather-temp" ).html( "<strong>" + result + "</strong> degrees" );

          </Link>

window.onload = main;



    if (Math.abs(squareYOffset) > 2.5) {

    this.state = { items: [], text: '' };

    mvMatrixStack.push(m.dup());

}
  console.log(router.query)

          </Link>

  success: function( result ) {

  multMatrix(m);

          </Link>

        </li>

  }

    highp vec3 directionalLightColor = vec3(0.5, 0.5, 0.75);

  cubeImage.onload = function() { handleTextureLoaded(cubeImage, cubeTexture); }

    return (

  gl.generateMipmap(gl.TEXTURE_2D);

      zIncValue = -zIncValue;

  )

window.onload = main;

gl.uniformMatrix4fv(nUniform, false, new WebGLFloatArray(normalMatrix.flatten()));

import React, { Component } from 'react';



  gl.bindTexture(gl.TEXTURE_2D, texture);



</script>

    }

}

normalMatrix = normalMatrix.transpose();

  attribute highp vec2 aTextureCoord;

import Link from "next/link";

    highp vec4 transformedNormal = uNormalMatrix * vec4(aVertexNormal, 1.0);



}



}

  <App />,

  }

            <a>About</a>

  render() {

}

    vTextureCoord = aTextureCoord;

    </div>

const About = () => {

  if (m) {



    $( "#weather-temp" ).html( "<strong>" + result + "</strong> degrees" );

export default App;

ReactDOM.render(

}

  uniform highp mat4 uNormalMatrix;

import Link from "next/link";

    this.handleChange = this.handleChange.bind(this);



  const gl = canvas.getContext("webgl");

  if (m) {

function mvPushMatrix(m) {

}

  componentDidMount() {



  console.log(router.query)

    highp vec3 directionalLightColor = vec3(0.5, 0.5, 0.75);

    highp vec3 directionalVector = vec3(0.85, 0.8, 0.75);

}

  render() {

  gl.generateMipmap(gl.TEXTURE_2D);

  console.log(router.query)

  constructor(props) {

  success: function( result ) {

gl.uniformMatrix4fv(nUniform, false, new WebGLFloatArray(normalMatrix.flatten()));

      xIncValue = -xIncValue;



    highp vec3 ambientLight = vec3(0.6, 0.6, 0.6);

    super(props);

}

  const canvas = document.querySelector("#glCanvas");

window.onload = main;

const About = () => {

}



    this.state = { items: [], text: '' };

  url: "/api/getWeather",

  getRawMarkup() {

  const canvas = document.querySelector("#glCanvas");



function initTextures() {





  cubeTexture = gl.createTexture();

    this.interval = setInterval(() => this.tick(), 1000);

}

    }));

  }

  tick() {

export default function Home() {

  )

  } else {

  render() {



  cubeTexture = gl.createTexture();

  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MAG_FILTER, gl.LINEAR);



  }

var normalMatrix = mvMatrix.inverse();

  attribute highp vec3 aVertexPosition;

  )





  return mvMatrix;

    this.handleChange = this.handleChange.bind(this);

      zIncValue = -zIncValue;

  }

}

  multMatrix(m);

  tick() {

  void main(void) {

      zIncValue = -zIncValue;



    this.state = { seconds: 0 };

  }

}

  }

      seconds: state.seconds + 1

}

    this.md = new Remarkable();

    vLighting = ambientLight + (directionalLightColor * directional);



    this.setState({ value: e.target.value });

  uniform highp mat4 uMVMatrix;

}

    squareXOffset += xIncValue * ((30 * delta) / 1000.0);

  uniform highp mat4 uMVMatrix;

);

export default About



    this.setState({ value: e.target.value });

  },

  } else {

    highp vec3 ambientLight = vec3(0.6, 0.6, 0.6);

    this.state = { items: [], text: '' };

    this.setState(state => ({

    return { __html: this.md.render(this.state.value) };

  url: "/api/getWeather",

        <TodoList items={this.state.items} />

});

window.onload = main;

  if (m) {

    super(props);

        </li>



    this.handleChange = this.handleChange.bind(this);



  if (gl === null) {

          </Link>

  }

    this.interval = setInterval(() => this.tick(), 1000);

    }



    vLighting = ambientLight + (directionalLightColor * directional);



            What needs to be done?

      <h1>Hello Next.js</h1>

    this.setState(state => ({

        </li>

}

  const router = useRouter();

      yIncValue = -yIncValue;

  tick() {





    vTextureCoord = aTextureCoord;

      <ul>

class App extends React.Component {

    gl_Position = uPMatrix * uMVMatrix * vec4(aVertexPosition, 1.0);

    this.md = new Remarkable();

    mvMatrixStack.push(mvMatrix.dup());



  if (!mvMatrixStack.length) {

  tick() {

  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MAG_FILTER, gl.LINEAR);

  }



  var m = Matrix.Rotation(inRadians, $V([v[0], v[1], v[2]])).ensure4x4();



  uniform highp mat4 uNormalMatrix;

    </div>

  }

});

}

var hiddenBox = $( "#banner-message" );

  }

}

  }

    super(props);

  void main(void) {

    highp vec3 directionalVector = vec3(0.85, 0.8, 0.75);

    }



  attribute highp vec3 aVertexPosition;

  gl.bindTexture(gl.TEXTURE_2D, null);

    highp float directional = max(dot(transformedNormal.xyz, directionalVector), 0.0);



    return (

    highp vec3 directionalLightColor = vec3(0.5, 0.5, 0.75);

  varying highp vec3 vLighting;

  }

normalMatrix = normalMatrix.transpose();



}

class App extends Component {

}

  uniform highp mat4 uNormalMatrix;

  }

        <h3>TODO</h3>



  const canvas = document.querySelector("#glCanvas");

import { useRouter } from "next/router";

    zipcode: 97201

    squareYOffset += yIncValue * ((30 * delta) / 1000.0);

function About() {

function mvRotate(angle, v) {

    );

  componentDidMount() {



function handleTextureLoaded(image, texture) {

normalMatrix = normalMatrix.transpose();

);

function About() {

    highp vec4 transformedNormal = uNormalMatrix * vec4(aVertexNormal, 1.0);

  gl.clearColor(0.0, 0.0, 0.0, 1.0);

    zipcode: 97201



  )

normalMatrix = normalMatrix.transpose();

    <h1>About Page</h1>

  cubeImage.src = "cubetexture.png";

  }

  componentDidMount() {



function main() {

      <ul>

  varying highp vec2 vTextureCoord;

    this.state = { seconds: 0 };

import React, { Component } from 'react';

function handleTextureLoaded(image, texture) {

// Arrow function

  const gl = canvas.getContext("webgl");

    this.setState(state => ({



  uniform highp mat4 uNormalMatrix;

  attribute highp vec3 aVertexNormal;

window.onload = main;

  componentDidMount() {

});

  gl.generateMipmap(gl.TEXTURE_2D);

</script>

  render() {

import { FormApp } from './FormApp';

  return (

}

  tick() {

ReactDOM.render(

);



<script id="shader-vs" type="x-shader/x-vertex">

    );

});

  if (gl === null) {

<script id="shader-vs" type="x-shader/x-vertex">

  return <h1>{router.query.name}の{router.query.color}color</h1>;

  attribute highp vec3 aVertexPosition;

      <ul>

ReactDOM.render(

  document.getElementById('root')

  attribute highp vec3 aVertexNormal;

function About() {

  varying highp vec2 vTextureCoord;

  return (

    this.state = { seconds: 0 };

window.onload = main;


