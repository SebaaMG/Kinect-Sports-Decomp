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
#define NAN(x) ((x) != (x))
extern int fn_82270AC0();
extern int fn_82472370();
extern int fn_82472D48();
extern int fn_824732A8();
extern int fn_8255FA88();
extern int fn_827F21A0();
extern int fn_827F2DD0();
extern int fn_827F62A8();
extern int fn_827F6318();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821955F4;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D394C;
extern unsigned int lbl_831D3990;
extern unsigned int lbl_831D39B0;
extern unsigned int lbl_831D39D0;


void fn_82472120(double param_1,int *param_2)

{
  float fVar1;
  char cVar3;
  int iVar2;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  fn_82472370();
  if (*param_2 == 0) {
    dVar5 = (double)(float)param_2[0x3cd];
    dVar6 = (double)lbl_821CC160;
    if (((double)(float)(dVar5 - param_1) < (double)lbl_8218E8E8) && ((double)lbl_8218E8E8 <= dVar5)
       ) {
      dVar7 = (double)((float)(dVar5 + (double)lbl_831D394C) - lbl_821955F4);
      fVar1 = (float)(dVar5 + (double)lbl_831D394C);
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((dVar7 < dVar6) << 2) | (uint)(NAN(dVar7) || NAN(dVar6)) << 2)) <
          0.0) {
        fVar1 = lbl_821955F4;
      }
      param_2[0x3cf] = (int)fVar1;
    }
    if ((param_2[0x3df] == 0) &&
       (dVar5 = (double)fn_827F6318(param_2[0x3d7]), (double)lbl_831D3990 < dVar5)) {
      fn_82270AC0(0xffffffff831d3974);
      param_2[0x3df] = 1;
    }
    if ((param_2[0x3e0] == 0) &&
       (dVar5 = (double)fn_827F6318(param_2[0x3d7]), (double)lbl_831D39B0 < dVar5)) {
      fn_82270AC0(0xffffffff831d3994);
      param_2[0x3e0] = 1;
    }
    if (param_2[0x3cd] == 0) {
      return;
    }
    dVar7 = -(double)(float)((double)(float)param_2[0x3cd] - param_1);
    dVar5 = dVar6;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((dVar7 < dVar6) << 2) | (uint)(NAN(dVar7) || NAN(dVar6)) << 2)) <
        0.0) {
      dVar5 = (double)(float)((double)(float)param_2[0x3cd] - param_1);
    }
    param_2[0x3cd] = (int)(float)dVar5;
    if (dVar5 != dVar6) {
      return;
    }
    uVar4 = 1;
  }
  else {
    if (*param_2 != 3) {
      return;
    }
    if (param_2[0x3cd] != 0) {
      dVar7 = (double)lbl_821CC160;
      dVar6 = -(double)(float)((double)(float)param_2[0x3cd] - param_1);
      dVar5 = dVar7;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((dVar6 < dVar7) << 2) | (uint)(NAN(dVar6) || NAN(dVar7)) << 2)) <
          0.0) {
        dVar5 = (double)(float)((double)(float)param_2[0x3cd] - param_1);
      }
      param_2[0x3cd] = (int)(float)dVar5;
      if (dVar5 == dVar7) {
        iVar2 = param_2[0x3d8];
        fn_827F62A8(dVar7,iVar2);
        cVar3 = fn_827F21A0(param_2[0x3d6],iVar2);
        if (cVar3 == '\0') {
          fn_827F2DD0(dVar7,param_2[0x3d6],iVar2);
        }
        fn_824732A8(param_2,param_2 + 0x3db);
      }
    }
    if ((param_2[0x3e1] == 0) &&
       (dVar5 = (double)fn_827F6318(param_2[0x3d8]), (double)lbl_831D39D0 < dVar5)) {
      fn_82270AC0(0xffffffff831d39b4);
      param_2[0x3e1] = 1;
    }
    iVar2 = fn_8255FA88(param_2[0x3d8]);
    if (iVar2 == 0) {
      return;
    }
    uVar4 = 4;
  }
  fn_82472D48(param_2,uVar4);
  return;
}

