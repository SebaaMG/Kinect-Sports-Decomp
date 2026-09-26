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
extern int fn_82C107F8();


ulonglong fn_82C4D9B8(int param_1,undefined8 param_2,int *param_3,char param_4,undefined4 *param_5
                       ,undefined4 *param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  iVar4 = *(int *)(param_1 + 8);
  uVar2 = 0;
  if (((*(uint *)(param_1 + 4) & 1) != 0) && (iVar4 != 0)) {
    uVar2 = fn_82C107F8(param_2,uVar1,0x90080,iVar4);
    if (-1 < (int)uVar2) goto LAB_82c4da88;
    if ((uVar2 & 0xffffffff) != 0x805000b7) {
      return uVar2;
    }
    *param_7 = 1;
  }
  iVar3 = 0;
  if (0 < param_4) {
    do {
      iVar4 = *param_3;
      uVar2 = fn_82C107F8(param_2,uVar1,0x90080,iVar4);
      if (-1 < (int)uVar2) break;
      if ((uVar2 & 0xffffffff) != 0x805000b7) {
        return uVar2;
      }
      iVar3 = iVar3 + 1;
      param_3 = param_3 + 1;
    } while (iVar3 < param_4);
  }
LAB_82c4da88:
  switch(iVar4) {
  case 1:
    *param_5 = 0x32595559;
    *param_6 = 0x10;
    break;
  case 2:
    *param_5 = 0x59565955;
    *param_6 = 0x10;
    break;
  case 3:
    *param_5 = 0x55595659;
    *param_6 = 0x10;
    break;
  case 4:
    *param_5 = 0;
    *param_6 = 0x18;
    break;
  case 5:
    *param_5 = 0;
    *param_6 = 0x10;
    break;
  case 6:
    *param_5 = 3;
    *param_6 = 0x10;
    break;
  case 7:
    *param_5 = 0;
    *param_6 = 0x20;
    break;
  case 8:
    *param_5 = 0;
    *param_6 = 8;
    break;
  case 9:
    *param_5 = 0x56555949;
    *param_6 = 0xc;
    break;
  case 10:
    *param_5 = 0x30323449;
    *param_6 = 0xc;
    break;
  case 0xb:
    *param_5 = 3;
    *param_6 = 0xc;
    break;
  case 0xc:
    *param_5 = 0x32315659;
    *param_6 = 0xc;
    break;
  default:
    uVar2 = 0xffffffff805000b7;
  }
  return uVar2;
}

