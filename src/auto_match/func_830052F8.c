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
extern int fn_82FFF670();
extern int fn_830176A0();
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832642FC;


undefined8
fn_830052F8(double param_1,int *param_2,undefined8 param_3,undefined4 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  undefined8 uVar2;
  double dVar3;
  
  uVar2 = 1;
  switch(param_4) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 0x1d:
  case 0x1e:
    dVar3 = (double)fn_830176A0(lbl_832642FC,param_3,param_7);
    (**(code **)(*param_2 + 0x3c))((double)(float)(param_1 - dVar3),param_2,param_4);
    uVar2 = 1;
    break;
  default:
    uVar2 = 2;
    break;
  case 8:
    cVar1 = (**(code **)(*param_2 + 0x90))(param_2);
    if ((cVar1 != '\0') || (param_2[4] == 0)) {
      fn_82FFF670(param_1,param_2);
      uVar2 = 1;
    }
    break;
  case 9:
    if (((*(byte *)((int)param_2 + 0x3d) & 0x20) != 0) || (param_2[4] == 0)) {
      (**(code **)(*param_2 + 0xe0))(param_2,(longlong)param_1 & 0xffff,param_7,param_8,1);
      uVar2 = 1;
    }
    break;
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0x14:
  case 0x15:
  case 0x20:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
    (**(code **)(*param_2 + 0x48))(param_1,param_2,param_3,param_4,param_7,param_8);
    uVar2 = 1;
    break;
  case 0x18:
    (**(code **)(*param_2 + 0x54))(param_2,param_1 != (double)lbl_821AAD20,1,param_7,param_8);
    uVar2 = 1;
    break;
  case 0x19:
    (**(code **)(*param_2 + 0x54))
              (param_2,(ulonglong)(param_1 != (double)lbl_821AAD20) << 1,2,param_7,param_8);
    uVar2 = 1;
    break;
  case 0x1a:
    (**(code **)(*param_2 + 0x54))
              (param_2,(ulonglong)(param_1 != (double)lbl_821AAD20) << 2,4,param_7,param_8);
    uVar2 = 1;
    break;
  case 0x1b:
    (**(code **)(*param_2 + 0x54))
              (param_2,(ulonglong)(param_1 != (double)lbl_821AAD20) << 3,8,param_7,param_8);
    uVar2 = 1;
    break;
  case 0x1c:
    (**(code **)(*param_2 + 0x54))
              (param_2,(ulonglong)(param_1 != (double)lbl_821AAD20) << 4,0x10,param_7,param_8);
    uVar2 = 1;
  }
  return uVar2;
}

