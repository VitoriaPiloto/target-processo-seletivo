
calculaMenor();
calculaMaior();
calculaSuperior();

function calculaMenor(){
  const fs = require('fs');
  try {
    var menor = 999999.999, dia;
    var i = 0;
    const data = fs.readFileSync('./dados.json', 'utf-8');
    const dado = JSON.parse(data);
    
    while (i < 30) {
      if (dado[i].valor < menor && dado[i].valor != 0){
        menor = dado[i].valor;
        dia = dado[i].dia;
      }
      i++;
    }
    console.log ("O menor valor de faturamento foi %d ocorrido no dia %d", menor, dia);
  } catch (e) {
    console.log(e);
  }
}

function calculaMaior(){
  const fs = require('fs');
  try {
    var maior = 0, dia;
    var i = 0;
    const data = fs.readFileSync('./dados.json', 'utf-8');
    const dado = JSON.parse(data);
    
    while (i < 30) {
      if (dado[i].valor > maior){
        maior = dado[i].valor;
        dia = dado[i].dia;
      }
      i++;
    }
    console.log ("O maior valor de faturamento foi %d, ocorrido no dia %d", maior, dia);
  } catch (e) {
    console.log(e);
  }
}

function calculaMedia(){
  const fs = require('fs');
  try {
    var i=0, media, soma=0, contNulo=0;
    const data = fs.readFileSync('./dados.json', 'utf-8');
    const dado = JSON.parse(data);
    while(i<30){
      if (dado[i].valor != 0){
        soma = soma + dado[i].valor;
        contNulo++;
      }
      i++;
    }
    media = soma/(30-contNulo);
  } catch (e) {
      console.log(e);
  }
  return media;
}

function calculaSuperior(){
  const fs = require('fs');
  try {
    var i=0, media, cont=0;
    const data = fs.readFileSync('./dados.json', 'utf-8');
    const dado = JSON.parse(data);
    media = calculaMedia();
    while(i<30){
      if (dado[i].valor > media){
        cont++;
      }
      i++;
    }
    console.log("%d dias o faturamento foi superior a media", cont);
  } catch (e) {
      console.log(e);
  }
}