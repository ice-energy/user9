This is a Hugo tree, and is meant to be built using
[hugo](https://gohugo.io).

```
     git clone https://github.com/ice-energy/user9.git
     cd user9
     hugo
```

hugo outputs a directory named **public** in the root of the
repository.  Rename that directory to 'docs'

```
     mv public docs
```

Those 2 steps are included in the shell script **x.sh**, which
automates it all.

I've also found in working with the hugo-bootstrap theme (maybe it's an
overall hugo thing?) that Cover Images (cover image of a post)
don't get put in the correct spot.

```
      ** The x.sh shell script fixes up everything **
```

When it's all built, it needs to be uploaded to github for display.

Now typically I use a gui to do this, but these lines could
be added to x.sh in order to automatically upload to github.

```
     git add .
     git commit -m "auto-commit from x.sh.  Best to put a real message in here"
     git push -u origin master
```

Browse to:

```
     ice-energy.github.io/user9
```

To allow for these server pages on GitHub, a particular setup
on the repository needs to be done.

```
     github.com/ice-energy
     You have to be logged in as ice-energy
     You have to be in the user9 repository
     Click the Settings Tab up near the top
```

Scroll down a bit to **GitHub Pages**.

Change **Source** to:

```
     master branch /docs folder
```

Hit **Save**.


Good to Go!



JR





