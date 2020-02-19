type state = {
  seconds: int,
  isTicking: bool,
};

type action =
  | Start
  | Stop
  | Reset
  | Tick;

[@react.component]
let make = () => {
  <div> {ReasonReact.string("Timer will go here...")} </div>;
};