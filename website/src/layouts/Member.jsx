import React, { useContext } from "react";
import { MemberToggleCtx } from "../context/MemberToggleCtx";
import { HiOutlineX } from "react-icons/hi";

const Member = () => {
  const [toggleMember, setToggleMember] = useContext(MemberToggleCtx);
  return (
    <div
      className={`${
        toggleMember ? "translate-x-0" : "translate-x-full"
      } top-0 left-0 w-full h-full p-10 max-w-screen max-h-screen fixed z-10 bg-white overflow-scroll no-scroll transition-all duration-400 ease-out flex flex-col`}
    >
      <div className="flex justify-between">
        <h3 className="text-3xl font-medium text-primary-blue">
          Group member.
        </h3>
        <button
          onClick={() => setToggleMember(!toggleMember)}
          className="group"
        >
          <HiOutlineX className="text-2xl group-hover:text-rose-500 transition-colors" />
        </button>
      </div>
      <div className="flex flex-col xl:flex-row space-y-2 xl:space-y-0 xl:space-x-2 items-center xl:items-stretch mt-24">
        {[
          {
            name: "นายศุภกร เนตรสุวรรณ",
            studentId: 64070108,
            jobs: ["เขียนโปรแกรม", "จัดทำเว็บไซต์", "ตัดต่อวีดีโอ"],
          },
          {
            name: "นายนรภัทร ศรีมูลน้อย",
            studentId: 64070054,
            jobs: ["เขียนโปรแกรม", "จัดทำวีดีโอ"],
          },
          {
            name: "พุฒิพงศ์ บรรเริงศรี",
            studentId: 64070077,
            jobs: ["เขียนโปรแกรม"],
          },
          {
            name: "นายกษิดิส ฮะมงคล",
            studentId: 64070003,
            jobs: ["จัดทำ Poster"],
          },
        ].map((member, i) => (
          <div
            key={member}
            className="px-4 py-6 bg-blue-100 rounded divide-y divide-blue-300 flex-1 w-full max-w-[30em] xl:max-w-[24em]"
          >
            <div className="text-slate-500 flex justify-between mb-4">
              <p>member</p>
              <h3>{i + 1}</h3>
            </div>
            <div className="pt-4">
              <p className="slate-900 text-xl font-medium">{member.name}</p>
              <p className="slate-700">{member.studentId}</p>
              <ul className="mt-4 text-slate-500 list-disc list-inside pl-2">
                {member.jobs.map((job, i) => (
                  <li key={i}>{job}</li>
                ))}
              </ul>
            </div>
          </div>
        ))}
      </div>
    </div>
  );
};

export default Member;
