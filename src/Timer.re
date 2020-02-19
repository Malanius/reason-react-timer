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
  let (state, dispatch) =
    React.useReducer(
      (state, action) =>
        switch (action) {
        | Start => {...state, isTicking: true}
        | Stop => {...state, isTicking: false}
        | Reset => {...state, seconds: 30}
        | Tick => {...state, seconds: state.seconds - 1}
        },
      {isTicking: false, seconds: 30},
    );

  <div>
    {ReasonReact.string(
       "There are " ++ string_of_int(state.seconds) ++ " on the clock",
     )}
  </div>;
};