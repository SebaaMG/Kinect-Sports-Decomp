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
extern char cRam8323fe6a;
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82E212B0();
extern int fn_82F64840();
extern int fn_82F64CE0();
extern int fn_82F6FE60();
extern int fn_82F6FEB8();
extern unsigned int uRam8323fe68;


undefined8 fn_82E21488(undefined8 param_1,ulonglong param_2)

{
  short sVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  ulonglong uVar9;
  
  if ((param_2 & 0xffffffff) != 0) {
    uVar2 = fn_82F64CE0(param_2);
    iVar8 = 0;
    if (cRam8323fe6a == '\0') {
      do {
        iVar6 = iVar8 * 2;
        cVar7 = (char)iVar8 + '\x01';
        sVar1 = (short)iVar8;
        iVar8 = (int)cVar7;
        *(short *)(iVar6 + -0x7cdc01e0) = 0x1f - sVar1;
      } while (cVar7 < ' ');
      fn_82F6FEB8(0xffffffff8323fe20,0x25,0xffffffff8214bc5c,5);
      uRam8323fe68 = 0;
      cRam8323fe6a = '\x01';
    }
    uVar3 = fn_82F6FE60(param_2,0xffffffff8323fe20);
    if ((uVar3 & 0xffffffff) == (uVar2 & 0xffffffff)) {
      uVar4 = fn_82E212B0(param_1,param_2);
      return uVar4;
    }
    uVar9 = uVar2 + 1;
    lVar5 = (uVar9 & 0x7fffffff) << 1;
    if (0x7fffffff < (uVar9 & 0xffffffff)) {
      lVar5 = -1;
    }
    iVar8 = fn_8265C9E0(lVar5);
    iVar6 = fn_82F64840(iVar8,uVar9,param_2,uVar2);
    if (iVar6 == 0) {
      *(undefined2 *)((int)((uVar2 & 0xffffffff) << 1) + iVar8) = 0;
      while ((uVar3 & 0xffffffff) < (uVar2 & 0xffffffff)) {
        *(undefined2 *)((int)((uVar3 & 0xffffffff) << 1) + iVar8) = 0x2e;
        uVar3 = fn_82F6FE60(iVar8,0xffffffff8323fe20);
      }
      fn_82E212B0(param_1,iVar8);
      fn_8265CA20(iVar8);
      return 1;
    }
  }
  return 0;
}

