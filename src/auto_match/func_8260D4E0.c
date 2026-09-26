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
extern int fn_82230680();
extern int fn_8256DAE8();
extern int fn_8260D340();
extern int fn_8260D640();
extern int fn_82F622A8();
extern int fn_82F68CC0();


undefined4 * fn_8260D4E0(undefined4 *param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  
  fn_8260D340();
  iVar4 = *(int *)(param_2 + 0x10);
  uVar1 = param_1[4];
  if (((uVar1 <= iVar4 + 0xcU) && (param_1[5] != iVar4 + 0xc)) &&
     (cVar2 = fn_8256DAE8(param_1,iVar4 + 0xc,1), cVar2 != '\0')) {
    param_1[4] = uVar1;
    puVar3 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar3 = (undefined4 *)*param_1;
    }
    *(undefined1 *)((int)puVar3 + uVar1) = 0;
  }
  fn_8260D640(param_1,param_2,0,0xffffffffffffffff);
  cVar2 = fn_82230680(param_1,0xffffffff821caa98);
  if (cVar2 == '\0') {
    if (0xffffffff - param_1[4] < 0xd) {
                    /* WARNING: Subroutine does not return */
      fn_82F622A8(0xffffffff82196214);
    }
    iVar4 = param_1[4] + 0xc;
    cVar2 = fn_8256DAE8(param_1,iVar4,0);
    if (cVar2 != '\0') {
      puVar3 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar3 = (undefined4 *)*param_1;
      }
      fn_82F68CC0(param_1[4] + (int)puVar3,0xffffffff821caa98,0xc);
      param_1[4] = iVar4;
      puVar3 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar3 = (undefined4 *)*param_1;
      }
      *(undefined1 *)((int)puVar3 + iVar4) = 0;
    }
  }
  else {
    puVar3 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar3 = (undefined4 *)*param_1;
    }
    fn_8260D640(param_1,param_1,(int)"cultures.txt" - (int)puVar3,0xc);
  }
  return param_1;
}

