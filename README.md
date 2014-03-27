Lyt
===

A UIView category to make autolayout (more) readable and less verbose. Write this:

```objective-c
[view lyt_centerInParent];
```

Instead of:

```objective-c
NSLayoutConstraint *centerXConstraint = [NSLayoutConstraint constraintWithItem:view attribute:NSLayoutAttributeCenterX relatedBy:NSLayoutRelationEqual toItem:view.superview attribute:NSLayoutAttributeCenterX multiplier:1.0 constant:0];
[view.superview addConstraint:centerXConstraint];

NSLayoutConstraint *centerYConstraint = [NSLayoutConstraint constraintWithItem:view attribute:NSLayoutAttributeCenterY relatedBy:NSLayoutRelationEqual toItem:view2 attribute:NSLayoutAttributeCenterY multiplier:1.0 constant:0];
[view.superview addConstraint:centerYConstraint];
```

Or this:

```objective-c
[view lyt_alignSidesToParentWithMargin:10];
```

Instead of:

```objective-c
NSDictionary *views = NSDictionaryOfVariableBindings(view);
NSDictionary *metrics = @{@"margin" : @(10)};
NSArray *constraints = [NSLayoutConstraint constraintsWithVisualFormat:@"H:|-margin-[view]-margin-|" options:kNilOptions metrics:metrics views:views];
[view.superview addConstraints:constraints];
```
