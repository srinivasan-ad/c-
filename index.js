const cp = require('child_process')
function User(user){
const createDirectory = cp.spawn("mkdir",[user]);
createDirectory.on('error',(err) => {
    console.log(err)
})
createDirectory.on('close',(code) => {
    if(code == 0){
        console.log(`Directory ${user} created successfully !!`)
    }
    else{
        console.log(`Code exited with error code ${code}`)
    }
})
}
User('Aditya');