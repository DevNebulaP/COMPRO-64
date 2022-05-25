import React, { useEffect, useState } from "react";
import Header from "./layouts/Header.jsx";
import MainSection from "./layouts/MainSection";
import Member from "./layouts/Member";
import { HiOutlineArrowCircleRight } from "react-icons/hi";
import { gsap } from "gsap";
import { MemberToggleCtx } from "./context/MemberToggleCtx"

const App = () => {
  const [toggleMember, setToggleMember] = useState(false);

  useEffect(() => {
    const tl = gsap.timeline({});
    tl.from(".vertical-line", {
      opacity: 0,
      x: "20vw",
      width: (index) => `${index * 1}em`,
      ease: "power3.out",
      duration: 1.2,
      stagger: 0.1
    }).from(".terminal-1", {
      opacity: 0,
      x: "3vw",
      ease: "power3.out",
      duration: 1,
      stagger: 0.2
    }, "0.5").from(".start-animate", {
      x: "1vw",
      opacity: 0,
      duration: 1,
      stagger: 0.15,
      ease: "power3.out",
    }, "0")
  }, [])

  return (
    <MemberToggleCtx.Provider value={[toggleMember, setToggleMember]}>
      <div className="bg-[#EBF0F6] w-full min-h-screen flex flex-col justify-center font-mitr">
        <Header />
        <Member />
        {/* <Member /> */}
        <div className="relative mx-10 my-10 box-border bg-white rounded-xl">
          <div className="relative flex items-center xl:items-stretch xl:justify-between flex-col xl:flex-row w-full">
            <div className="w-full xl:max-w-[60%] p-10">
              <h2 className="start-animate text-primary-blue font-semibold text-4xl lg:text-5xl tracking-wide lg:truncate lg:pt-16">NUMEROUS-COMPRO64</h2>
              <p className="start-animate text-[#8393A6] lg:text-lg mt-2">The finest dining project 👻</p>
              <p className="start-animate text-[#8393A6] my-10">ชิ้นงานชิ้นนี้ จัดเป็นส่วนหนึ่งของรายวิชา Computer Programming. ประจำภาคการศึกษาที่ 2 ปีการศึกษา 2564. จุดประสงค์ของงานชิ้นนี้เพื่อนำเสนอให้แก่ อาจารย์กิติ์สุชาต พสุภา และ อาจารย์ปานวิทย์ ธุวะนุติ</p>
              <p className="start-animate mt-20 text-xs text-[#B9B9B9]">Provided features.</p>
              <ul className=" flex flex-col space-y-3 mt-2 xl:mb-12">
                {["Lorem Ipsum generator", "Base Number Converter", "Base64 encoder", "Base64 decoder"]
                  .map((name, i) => (
                    <li key={i} className="start-animate">
                      <button className={`w-full border border-[#cccccc] px-6 py-4 rounded flex justify-between items-center hover:shadow transition-all duration-200 hover:bg-slate-50`}>
                        <div className="">
                          <HiOutlineArrowCircleRight className="box-content text-primary-blue text-lg" />
                        </div>
                        <p className="text-[#474B61]">
                          {name}
                        </p>
                      </button>
                    </li>
                  ))}
              </ul>
            </div>
            <div className="w-full relative flex justify-center items-center xl:mt-0 xl:max-w-[60%] p-10 pt-0 pb-10 overflow-hidden">
              <div className="vertical-line absolute hidden xl:block w-0.5 h-full bg-[#6B7796] top-0 left-0 translate-x-0" />
              <div className="vertical-line absolute hidden xl:block w-0.5 h-full bg-[#BDC7E1] top-0 left-0 translate-x-2" />
              <div className="vertical-line absolute hidden xl:block w-0.5 h-full bg-[#BDC7E1] top-0 left-1/3 translate-x-2" />
              <div className="vertical-line absolute hidden xl:block w-0.5 h-full bg-[#BDC7E1] top-0 left-2/3 translate-x-2" />
              <div className="relative ">
                <img src="./main_menu.png" alt="main_menu" className="terminal-1 w-full lg:max-w-[50em] xl:mr-4 p-4 bg-[#1F2428] rounded-xl" />
                <div className="terminal-1 hidden absolute lg:flex flex-col justify-center bg-gradient-to-r from-[#272c31] to-[#35424b] p-5 pl-12 w-[24em] h-52 -bottom-2 xl:-bottom-12 right-4 rounded-xl">
                  <p className="text-white">WHAT'S YOUR GENERATED TOY.</p>
                  <p className="text-[#ADC0D3]">xxxx xx xxxx xx</p>
                </div>
              </div>
            </div>

          </div>
          <div className="w-full h-[1px] bg-[#6B7796]" />
          
          <div className="p-10 mt-12">
            <MainSection />
          </div>
        </div>
      </div>
    </MemberToggleCtx.Provider>
  );
}

export default App;
