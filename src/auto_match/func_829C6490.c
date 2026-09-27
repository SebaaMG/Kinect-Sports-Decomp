typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern int fn_829C5BD8();
extern int fn_829C5D98();
extern int fn_829C6000();
extern unsigned int lbl_82006848;
extern unsigned int lbl_83214E00;
extern unsigned int lbl_83214E10;
extern unsigned int lbl_83214E14;
extern unsigned int lbl_83214E18;
extern unsigned int lbl_83214E1C;
extern unsigned int lbl_83214E20;
extern unsigned int lbl_83214E30;
extern unsigned int lbl_83214F3C;
extern unsigned int lbl_83214F50;
extern unsigned int lbl_83214F68;
extern unsigned int lbl_83214F6C;
extern unsigned int lbl_83214F80;
extern unsigned int lbl_83214FA0;


undefined8 fn_829C6490(longlong param_1,uint *param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if ((param_1 - 0x2b005U & 0xffffffff) < 7) {
    if ((int)(param_1 - 0x2b005U) == 0) {
      puVar2 = &lbl_83214F80;
      lVar3 = 7;
      do {
        puVar2 = puVar2 + 1;
        *puVar2 = 0;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      if (lbl_83214E00 == 0) {
        lbl_83214F80 = 8;
        lbl_83214FA0 = 0x83214f84;
        lbl_83214F68 = *param_2;
        lbl_83214E18 = *param_2;
        lbl_83214F50 = 2;
        fn_829C5D98();
        return 0;
      }
    }
    else {
      if (((param_1 == 0x2b006) || (param_1 == 0x2b007)) || (param_1 == 0x2b008)) goto LAB_829c678c;
      if (param_1 == 0x2b009) {
        lbl_83214E00 = 7;
        return 0;
      }
      if (param_1 != 0x2b00a) {
        puVar2 = &lbl_83214F80;
        lVar3 = 7;
        do {
          puVar2 = puVar2 + 1;
          *puVar2 = 0;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
        if (lbl_83214E00 != 0) {
          if ((lbl_83214F50 < 4) && (lbl_83214F50 != 0)) {
            if (lbl_83214F50 == 1) {
              lbl_83214E20 = 6;
              lbl_83214E30 = lbl_83214F3C * lbl_82006848;
              XamNuiCameraTiltReportStatus(0x2b00c,0xffffffff83214e20);
              return 0xffffffff80004005;
            }
            lbl_83214E10 = 6;
            lbl_83214E1C = lbl_83214F3C * lbl_82006848;
            XamNuiCameraTiltReportStatus(0x2b006,0xffffffff83214e10);
          }
          return 0xffffffff80004005;
        }
        fn_829C5BD8();
        lbl_83214F50 = 1;
        fn_829C6000((double)(*(float *)((*param_2 & 3) * 4 + -0x7cea3cc8) * lbl_82006848),
                          (double)(float)param_2[1],(double)(float)param_2[2]);
        return 0;
      }
      puVar2 = &lbl_83214F80;
      lVar3 = 7;
      do {
        puVar2 = puVar2 + 1;
        *puVar2 = 0;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      if (lbl_83214E00 == 0) {
        lbl_83214F80 = 8;
        lbl_83214FA0 = 0x83214f84;
        lbl_83214F6C = *param_2;
        lbl_83214E14 = *param_2;
        lbl_83214F50 = 3;
        fn_829C5D98();
        return 0;
      }
    }
    if ((lbl_83214F50 < 4) && (lbl_83214F50 != 0)) {
      if (lbl_83214F50 == 1) {
        lbl_83214E20 = 6;
        lbl_83214E30 = lbl_83214F3C * lbl_82006848;
        XamNuiCameraTiltReportStatus(0x2b00c,0xffffffff83214e20);
        return 0xffffffff80004005;
      }
      lbl_83214E10 = 6;
      lbl_83214E1C = lbl_83214F3C * lbl_82006848;
      XamNuiCameraTiltReportStatus(0x2b006,0xffffffff83214e10);
    }
    uVar1 = 0xffffffff80004005;
  }
  else {
LAB_829c678c:
    uVar1 = 0xffffffff8000ffff;
  }
  return uVar1;
}

