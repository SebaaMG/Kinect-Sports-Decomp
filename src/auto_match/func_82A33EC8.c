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
extern unsigned int *auStack_90;
extern int fn_82A37680();
extern int fn_82A37E70();
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


ulonglong fn_82A33EC8(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  uint auStack_90 [4];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong *plStack_68;
  uint *puStack_64;
  
  auStack_90[0] = 0;
  if ((param_2[6] & 0x80000000) == 0) {
    uVar1 = 0xffffffffc0000022;
  }
  else {
    lVar2 = fn_82A37E70(param_1 + 0x8c,param_2[4],param_2[1]);
    *param_3 = lVar2;
    if (lVar2 == -1) {
      *(undefined4 *)param_3 = 0xffffffff;
      uStack_6c = param_2[1];
      puStack_64 = auStack_90;
      uStack_7c = *param_2;
      uStack_74 = param_2[4];
      uStack_78 = param_2[5];
      uStack_80 = 1;
      uStack_70 = 0xffffffff;
      plStack_68 = param_3;
      RtlEnterCriticalSection(param_2 + 0xe);
      iVar3 = fn_82A37680(param_1 + 0xc4,&uStack_80);
      if (iVar3 == 0) {
        auStack_90[0] = 0xc0000017;
      }
      else {
        auStack_90[0] = NtWaitForSingleObjectEx(param_2[5],1,0,0);
      }
      RtlLeaveCriticalSection(param_2 + 0xe);
    }
    uVar1 = (ulonglong)auStack_90[0];
  }
  return uVar1;
}

