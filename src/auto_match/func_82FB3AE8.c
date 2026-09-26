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
extern int fn_82FA9208();
extern int fn_82FA9480();
extern int fn_82FA9508();
extern int fn_82FA99C8();
extern int fn_82FAD1F0();
extern int fn_82FAD5B0();
extern int fn_82FADD68();
extern int fn_82FAE150();
extern int fn_82FAE168();


char fn_82FB3AE8(int param_1,undefined8 param_2,undefined8 param_3,longlong param_4,int *param_5)

{
  int iVar5;
  int iVar6;
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  iVar5 = fn_82FAE168(*(undefined4 *)(param_1 + 0x58));
  iVar6 = fn_82FAE150(*(undefined4 *)(param_1 + 0x58));
  if (((int)param_4 < iVar5 + iVar6) &&
     (uVar1 = fn_82FADD68(*(undefined4 *)(param_1 + 0x58),param_1,param_2,param_3),
     (uVar1 & 0xffffffff) != 0)) {
    iVar6 = param_1 + 0x40;
    iVar5 = fn_82FAD1F0(iVar6,0,uVar1);
    *param_5 = iVar5;
    fn_82FA9208(uVar1);
    if (*param_5 != 0) {
      *(int *)(param_1 + 0x50) = *param_5;
      fn_82FA9480(*param_5,0);
      fn_82FA99C8(*param_5,param_4);
      lVar2 = fn_82FAE168(*(undefined4 *)(param_1 + 0x58));
      lVar3 = fn_82FAE150(*(undefined4 *)(param_1 + 0x58));
      lVar2 = lVar2 + lVar3;
      if (-1 < (int)param_4) {
        lVar2 = lVar2 - param_4;
      }
      fn_82FA9508(*param_5,lVar2);
      if ((*(int *)(param_1 + 0xc) != 0) || (iVar5 = fn_82FAD5B0(iVar6), iVar5 == 1)) {
        uVar4 = fn_82FAE168(*(undefined4 *)(param_1 + 0x58));
        iVar5 = fn_82FAD1F0(iVar6,uVar4,0);
        return (iVar5 == 0) + '\x01';
      }
    }
  }
  return '\x02';
}

