import React from "react";

const MainSection = () => {
  return (
    <>
      <div className="flex flex-col-reverse sm:flex-row items-center">
        <div className="sm:w-1/2 sm:flex justify-center mt-4 sm:mt-0">
          <img
            src="./lorem_gen.png"
            alt="lorem_gen"
            className="p-4 bg-[#1F2428] rounded-xl"
          />
        </div>
        <div className="sm:w-1/2 sm:ml-10">
          <p className="text-primary-blue text-2xl sm:text-3xl font-medium">
            1.) Lorem Ipsum generator
          </p>
          <p className="mt-4 text-sm sm:text-base text-[#8393A6] sm:leading-8">
            สร้างคำ Lorem Ipsum แบบไม่ซ้ำกันขึ้นมาตามจำนวนคำที่คุณต้องการ
            พร้อมกับการจัดรูปแบบ Paragraph ให้ด้วย!
          </p>
        </div>
      </div>
      <div className="flex flex-col sm:flex-row items-start mt-12">
        <div className="sm:w-1/2 sm:p-2">
          <p className="text-primary-blue text-2xl sm:text-3xl font-medium">
            2.) Base number converter
          </p>
          <p className="mt-4 text-sm sm:text-base text-[#8393A6] sm:leading-8">
            สามารถเปลี่ยนเลขฐานได้ไม่ว่าจะเป็น การเปลี่ยน
            <br />
            - เลขฐาน 2<br />
            - เลขฐาน 10
            <br />
            - เลขฐาน 16
            <br />
            และสามารถรองรับรุปแบบการเปลี่ยนกลับไปมาได้ทุกรูปแบบ เช่น
            จากเลขฐานสองไปฐานสิบหก ฐานสิบหกไปฐานสิบ
          </p>
        </div>
        <div className="sm:ml-4 sm:w-1/2 flex-col space-y-4 justify-center mt-4 sm:mt-0">
          <img
            src="./basenumber_1.png"
            alt="basenumber_1"
            className="p-4 bg-[#1F2428] rounded-xl"
          />
          <img
            src="./basenumber_2.png"
            alt="basenumber_1"
            className="p-4 bg-[#1F2428] rounded-xl"
          />
          <img
            src="./basenumber_3.png"
            alt="basenumber_1"
            className="p-4 bg-[#1F2428] rounded-xl"
          />
        </div>
      </div>
      <div className="flex flex-col-reverse sm:flex-row items-start mt-12">
        <div className="sm:w-1/2 sm:flex justify-center mt-4 sm:mt-0">
          <img
            src="./base64_1.png"
            alt="base64_1"
            className="p-4 bg-[#1F2428] rounded-xl"
          />
        </div>
        <div className="sm:w-1/2 sm:ml-10">
          <p className="text-primary-blue text-2xl sm:text-3xl font-medium">
            3.) Base64 encoder
          </p>
          <p className="mt-4 text-sm sm:text-base text-[#8393A6] sm:leading-8">
            ทำการแปลงข้อมูลให้อยู่ในรูปแบบ Base64
            เพื่อบันทึกข้อมูลหรือส่งข้อมูลต่อ ใช้ในการโอนย้ายข้อมูลผ่าน Network
            ในรูป ASCII
          </p>
        </div>
      </div>
      <div className="flex flex-col sm:flex-row items-center mt-12">
        <div className="sm:w-1/2 sm:p-2">
          <p className="text-primary-blue text-2xl sm:text-3xl font-medium">
            4.) Base 64 decoder
          </p>
          <p className="mt-4 text-sm sm:text-base text-[#8393A6] sm:leading-8">
            ทำการแปลงข้อมูลกลับจากรูปข้อมูล Base64 ที่รับ input เข้ามาไปกลับไปเป็น plain text เหมือนก่อน encode
          </p>
        </div>
        <div className="sm:ml-4 sm:w-1/2 mt-4 sm:mt-0">
          <img
            src="./base64_2.png"
            alt="base64_2"
            className="p-4 bg-[#1F2428] rounded-xl"
          />
        </div>
      </div>
    </>
  );
};

export default MainSection;
