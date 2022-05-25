import React, { useState, useEffect, useContext } from "react";
import { MemberToggleCtx } from "../context/MemberToggleCtx";

const Header = () => {
  const [scrollAmount, setScrollAmount] = useState(0);
  const [toggleMember, setToggleMember] = useContext(MemberToggleCtx);

  useEffect(() => {
    const handleScroll = () => {
      const position = window.pageYOffset;
      setScrollAmount(position);
    };
    window.addEventListener("scroll", handleScroll);
    return () => window.removeEventListener("scroll", handleScroll);
  }, []);

  return (
    <div
      className={`${
        scrollAmount >= 30
          ? "text-[#474B61] bg-white shadow-lg py-6 "
          : " text-[#5A6B7F] py-5 "
      } sticky top-0 left-0 w-full flex justify-between items-center duration-200 px-8 lg:px-12 z-10`}
    >
      <div className="relative flex items-center cursor-pointer">
        <div
          className={`${
            scrollAmount >= 30 ? "bg-[#474B61]" : "bg-[#5A6B7F]"
          } h-0.5 w-8 mr-1.5 rounded-full duration-200`}
        ></div>
        <div className="tracking-[5px] font-medium">COMPRO64</div>
      </div>
      <ul className="flex items-center space-x-5 underline-offset-1">
        <li
          onClick={() => window.open("https://github.com/DevNebulaP/COMPRO-64")}
          className="cursor-pointer underline decoration-transparent decoration-2 underline-offset-2 hover:decoration-primary-blue transition-all duration-200"
        >
          Github
        </li>
        <li
          onClick={() => setToggleMember((prevState) => !prevState)}
          className="cursor-pointer underline decoration-transparent decoration-2 underline-offset-2 hover:decoration-primary-blue transition-all duration-200"
        >
          Creators
        </li>
      </ul>
    </div>
  );
};

export default Header;
