# Qode

Qode is a lightly modified fork of Node.js that merges Node's event loop with Qt's event loop.
It is designed to be used together with `@nodegui/nodegui`.

Qode starts both Qt and Node's event loops in the same thread. This is crucial to achieving low CPU footprint.
Qode can be used as a _drop in_ replacement of NodeJS and hence you could consider it as NodeJS with Qt powers 💪.

This npm module downloads the prebuilt qode for the current Operating System.

_Build Instructions for qode can be found here:_ https://github.com/master-atul/qode

# Installation

```
yarn add @nodegui/qode
```

or

```
npm install @nodegui/qode
```

# Version Table:

| Qode   | Node    | Qt     |
| ------ | ------- | ------ |
| 1.0.0  | 12.6.1  | 5.13.0 |
| ------ | ------- | ------ |
