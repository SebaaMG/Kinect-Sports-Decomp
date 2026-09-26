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
extern float fRam831d4f44;
extern float fRam831d4f48;
extern float fRam831d4f4c;
extern int iRam8326af50;
extern unsigned int *lbl_8327F848;
extern unsigned int *lbl_8327F868;


void fn_8260F790(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  
  if (param_5 == 0) {
    dVar4 = (double)*(float *)(param_3 + 0x10);
    dVar3 = (double)*(float *)(iRam8326af50 + 0x98);
    if ((dVar4 < dVar3) || (dVar3 = (double)*(float *)(iRam8326af50 + 0x9c), dVar3 < dVar4)) {
      dVar4 = dVar3;
    }
    iVar1 = (**(code **)(*lbl_8327F848 + 0x10))(dVar4,lbl_8327F848,iRam8326af50 + 0x74);
    if (iVar1 < 0) {
      (**(code **)(*lbl_8327F868 + 8))(lbl_8327F868,0xffffffff821c3b18,0x602,0xffffffff821c3db0);
    }
    dVar4 = (double)*(float *)(param_3 + 0x10);
    dVar3 = (double)*(float *)(iRam8326af50 + 0x6c);
    if ((dVar4 < dVar3) || (dVar3 = (double)*(float *)(iRam8326af50 + 0x70), dVar3 < dVar4)) {
      dVar4 = dVar3;
    }
    iVar1 = (**(code **)(*lbl_8327F848 + 0x10))(dVar4,lbl_8327F848,iRam8326af50 + 0x48);
    if (iVar1 < 0) {
      (**(code **)(*lbl_8327F868 + 8))(lbl_8327F868,0xffffffff821c3b18,0x617,0xffffffff821c3db0);
    }
    dVar4 = (double)*(float *)(param_3 + 0x10);
    dVar3 = (double)*(float *)(iRam8326af50 + 0xc4);
    if ((dVar4 < dVar3) || (dVar3 = (double)*(float *)(iRam8326af50 + 200), dVar3 < dVar4)) {
      dVar4 = dVar3;
    }
    iVar1 = (**(code **)(*lbl_8327F848 + 0x10))(dVar4,lbl_8327F848,iRam8326af50 + 0xa0);
    if (-1 < iVar1) {
      return;
    }
    uVar2 = 0x62c;
  }
  else {
    if ((param_5 != 1) && (param_5 != 3)) {
      return;
    }
    iVar1 = (**(code **)(*lbl_8327F848 + 0x10))
                      ((double)fRam831d4f44,lbl_8327F848,iRam8326af50 + 0x74);
    if (iVar1 < 0) {
      (**(code **)(*lbl_8327F868 + 8))(lbl_8327F868,0xffffffff821c3b18,0x63c,0xffffffff821c3db0);
    }
    iVar1 = (**(code **)(*lbl_8327F848 + 0x10))
                      ((double)fRam831d4f4c,lbl_8327F848,iRam8326af50 + 0x48);
    if (iVar1 < 0) {
      (**(code **)(*lbl_8327F868 + 8))(lbl_8327F868,0xffffffff821c3b18,0x64c,0xffffffff821c3db0);
    }
    iVar1 = (**(code **)(*lbl_8327F848 + 0x10))
                      ((double)fRam831d4f48,lbl_8327F848,iRam8326af50 + 0xa0);
    if (-1 < iVar1) {
      return;
    }
    uVar2 = 0x65c;
  }
  (**(code **)(*lbl_8327F868 + 8))(lbl_8327F868,0xffffffff821c3b18,uVar2,0xffffffff821c3db0);
  return;
}

