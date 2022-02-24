# instacover-mobile-sdk

## Android

```kotlin
maven {
            url = uri("https://storage.googleapis.com/instacover-maven/")
        }
```

```kotlin
implementation("ai.instacover:InstaCover:<VERSION>")
```

```kotlin
val instaCover = InstaCover()
val fragment = instaCover.createSessionFragment(sessionId, listener)
```

## iOS

Add swift package url: `https://github.com/InstaCover/instacover-mobile-sdk.git`

Set exact version to `<VERSION>`

```swift
let instaCover = InstaCover()
let view = instaCover.createInstacarView(sessionId: sessionId, stateChangeListener: ...)

```
