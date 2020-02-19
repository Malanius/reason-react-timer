type state = {
  seconds: int,
  isTicking: bool,
};

[@react.component]
let make = () => {
  <div> {ReasonReact.string("Timer will go here...")} </div>;
};