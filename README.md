# atlas-chain-index-lab

`atlas-chain-index-lab` explores blockchain tooling with a small C codebase and local fixtures. The technical goal is to implement a C blockchain tooling project for index format conversion, using round-trip fixtures and lossless normalization checks.

## Why I Keep It Small

The project exists to keep a narrow engineering decision visible and testable. For this repo, that decision is how event finality and settlement risk should influence a review result.

## Atlas Chain Index Lab Review Notes

Start with `proof depth` and `event finality`. Those cases create the widest score spread in this repo, so they are the best quick check when the model changes.

## Included Behavior

- `fixtures/domain_review.csv` adds cases for event finality and nonce pressure.
- `metadata/domain-review.json` records the same cases in structured form.
- `config/review-profile.json` captures the read order and the two review questions.
- `examples/atlas-chain-index-walkthrough.md` walks through the case spread.
- The C code includes a review path for `proof depth` and `event finality`.
- `docs/field-notes.md` explains the strongest and weakest cases.

## Internal Model

The fixture data drives the tests. The code stays thin, while `metadata/domain-review.json` and `config/review-profile.json` explain what each case is meant to protect.

The C code keeps the review rule close to the tests.

## Try It Locally

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/verify.ps1
```

## Validation

That command is also the regression path. It verifies the domain cases and catches mismatches between the CSV, metadata, and code.

## Scope

The repository is intentionally scoped to local checks. I would expand it by adding adversarial fixtures before adding features.
