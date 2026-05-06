# Review Journal

The review surface for `atlas-chain-index-lab` is deliberately narrow: one fixture, one scoring rule, and one local check.

The local checks classify each case as `ship`, `watch`, or `hold`. That gives the project a small review vocabulary that matches its blockchain tooling focus without claiming live deployment or external usage.

## Cases

- `baseline`: `event finality`, score 110, lane `watch`
- `stress`: `nonce pressure`, score 136, lane `watch`
- `edge`: `settlement risk`, score 144, lane `ship`
- `recovery`: `proof depth`, score 189, lane `ship`
- `stale`: `event finality`, score 139, lane `watch`

## Note

The repository should be understandable without pretending it is larger than it is.
