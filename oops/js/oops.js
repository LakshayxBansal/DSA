class User {
    constructor(username, email) {
        this._username = username;
        this._email = email;
    }

    getUsername() {
        return this._username;
    }

    setEmail(email) {
        if (email.includes('@')) {
            this._email = email;
        } else {
            throw new Error('Invalid email address');
        }
    }
}

const user = new User('JohnDoe', 'john@example.com');
console.log(user.getUsername());
user.setEmail('john@newdomain.com');