# instacover-mobile-sdk

## Demo applications

Replace sessionIds with newly generated ids from api `/instacar/v2.0/session/create`

- ios-demo/Shared/DemoApp.swift#L14
- android-demo/devapp/src/main/java/ai/instacover/instacar/devapp/MainActivity.kt#L45

## Android

add repository

```kotlin
maven {
    url = uri("https://storage.googleapis.com/instacover-maven/")
}
```

add dependency

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

### Info.plist

- Add `instacar.instaclaim.ai` to `WKAppBoundDomains`
- Add `Privacy - Camera Usage Description`
- Add `Privacy - Location When In Use Usage Description`
