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
extern int fn_82FA5060();
extern int fn_82FFDF98();


undefined4 * fn_82FFE158(undefined4 *param_1,ulonglong param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  
  uVar2 = (param_2 & 0xffffffff) * 0x8421085 >> 0x20;
  uVar2 = ((param_2 - uVar2 & 0xffffffff) >> 1) + uVar2 >> 4;
  lVar5 = param_2 - ((uVar2 & 0x7ffffff) * 0x20 - uVar2);
  puVar4 = *(undefined4 **)((int)((lVar5 + 1U & 0xffffffff) << 2) + (int)param_1);
  do {
    if (puVar4 == (undefined4 *)0x0) {
fn_82FFDF98:
      puVar4 = (undefined4 *)fn_82FA5060(*param_1,0xc);
      if (puVar4 != (undefined4 *)0x0) {
        iVar3 = (int)((lVar5 + 1U & 0xffffffff) << 2);
        uVar1 = *(undefined4 *)(iVar3 + (int)param_1);
        puVar4[1] = (int)param_2;
        *puVar4 = uVar1;
        *(undefined4 **)(iVar3 + (int)param_1) = puVar4;
        param_1[0x20] = param_1[0x20] + 1;
        puVar4 = puVar4 + 2;
      }
      return puVar4;
    }
    if ((ulonglong)(uint)puVar4[1] == (param_2 & 0xffffffff)) {
      if (puVar4 != (undefined4 *)0xfffffff8) {
        return puVar4 + 2;
      }
      goto fn_82FFDF98;
    }
    puVar4 = (undefined4 *)*puVar4;
  } while( true );
}

