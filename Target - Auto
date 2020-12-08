const puppeteer = require('puppeteer');

async function getSite() {
    const browser = await puppeteer.launch({
        headless: false,
        defaultViewport: null
    });
const page = await browser.newPage();

/*const url = 'https://www.target.com/p/xbox-one-wireless-controller-white/-/A-51313062';

await page.goto(url);


const [button] = await page.$x("//button[contains(., 'Ship it')]");
if (button) {
   await button.click();
}


await page.goto(url);

const [buttonn] = await page.$x("//buttonn[contains(., 'Close')]");
if (buttonn) {
   await buttonn.click();
}


*/
const url2 = 'https://www.target.com/co-login?interstitial=true&redirectToURL=%2Fco-review%3Fprecheckout%3Dtrue';
page.goto(url2);


await page.waitForSelector('#username', {
    visible: true,
  });


await page.type('#username', 'test339@gmail.com');


await page.type('#password', 'RLJRLJ',);

await page.click('#login');

/*
await page.waitForSelector('#fullName', {
    visible: true,
});

await page.type('#fullName', 'Test test',);

await page.type('#addressLine1', '1 North Street',);
  
await page.type('#zipCode', '11355',);

await page.type('#city', 'Flushing',);

await page.select('#state', 'NY')

await page.type('#mobile', '123 456 7890',);



const [button] = await page.$x("//button[contains(., 'Save & continue')]");
if (button) {
   await button.click();
}


await page.waitForSelector('#creditCardInput-cardNumber', {
    visible: true,
  });

await page.type('#creditCardInput-cardNumber', '2837446',);


await page.waitForSelector('#creditCardInput-expiration', {
    visible: true,
  });

await page.type('#creditCardInput-expiration', '1120',);

await page.type('#creditCardInput-cvv', '000',);

await page.type('#creditCardInput-cardName', 'Test test',);

const [button2] = await page.$x("//button2[contains(., 'Save and continue')]");
if (button2) {
   await button2.click();
}

//await page.waitForNavigation();
//await page.goto(url2);

*/

await page.waitForNavigation();


await page.click('#placeOrderButton');

}q

getSite();
