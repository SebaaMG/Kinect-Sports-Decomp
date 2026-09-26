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
extern int fn_82D7E470();
extern unsigned int uRam831882fc;


undefined8 fn_82E4B8A8(undefined8 param_1,uint *param_2,uint *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_5 == (int *)0x0) || (*param_5 == 0)) {
    *param_3 = 0;
    *param_2 = 0;
    iVar1 = fn_82D7E470(uRam831882fc,0xffffffff82153ca8,param_2);
    iVar2 = fn_82D7E470(uRam831882fc,0xffffffff82153c90,param_3);
    if ((iVar1 != 0) && (((iVar2 != 0 && (*param_2 != 0)) && (*param_3 != 0)))) {
      *param_2 = *param_2 + 0xf & 0xfffffff0;
      if (param_4 == 8) {
        uVar3 = *param_3 + 0x1f & 0xffffffe0;
      }
      else {
        uVar3 = *param_3 + 0xf & 0xfffffff0;
      }
      *param_3 = uVar3;
      uVar3 = *param_2;
      if (uVar3 < 0x10) {
        uVar3 = 0x10;
      }
      else if (0x2000 < uVar3) {
        uVar3 = 0x2000;
      }
      *param_2 = uVar3;
      uVar3 = *param_3;
      if (uVar3 < 0x20) {
        uVar3 = 0x20;
      }
      else if (0x2000 < uVar3) {
        *param_3 = 0x2000;
        return 1;
      }
      *param_3 = uVar3;
      return 1;
    }
  }
  else if ((param_5[0x26] != 0) && (param_5[0x27] != 0)) {
    *param_2 = param_5[10];
    *param_3 = param_5[0xb];
    return 1;
  }
  return 0;
}

