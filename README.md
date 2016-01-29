##Syncker - an Ubuntu package synchronizer

Syncker's goal is to backup and sync user installed packages in an Ubuntu system. It's apt only for now.

###Installation

####From source

   `$ make compile` from the root will generate a binary called syncker.

####Download the binary TODO!

###Usage:

To start using it, first register yourself in the server:

    $ syncker register flaviamissi@gmail.com

Then choose a password to identify yourself. This will log you in automatically.

####First time using it
If it's your first time using syncker, we'll start by updating the server with your local packages:

    $ syncker push

####Getting a new machine on sync
When adding a new machine, first login:

    $ syncker login flaviamissi@gmail.com

Type your password and let's move on with the update:

    $ syncker pull

This will update your local syncker database with everything stored on the server.

To install the new packages, run:

    $ syncker install

In the `pull` step we could have used the `--install` flag, like this:

    $ syncker pull --install

This would update and install all new packages coming from the server.


##Contributing

Pull requests are more than welcome!

If you have any suggestions, bug reports, or anything else just open an issue.

Many thanks!
