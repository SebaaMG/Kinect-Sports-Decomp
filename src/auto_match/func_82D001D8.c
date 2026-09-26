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
extern int fn_82CFBBF0();


ulonglong fn_82D001D8(int *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar5 = 0;
  cVar2 = *param_2;
  pcVar1 = param_2;
  while (cVar2 != '\0') {
    pcVar1 = pcVar1 + 1;
    uVar5 = ((uVar5 & 0x7ffffff) * 0x20 - uVar5) + (longlong)cVar2;
    cVar2 = *pcVar1;
  }
  uVar6 = (ulonglong)(uint)param_1[2];
  iVar4 = *param_1;
  uVar7 = uVar5 & 0x7fffffff & uVar6;
  uVar3 = *(uint *)((int)(uVar7 << 2) + iVar4);
  while( true ) {
    if (uVar3 == 0xffffffff) {
      return uVar6 + 1;
    }
    if (((ulonglong)uVar3 == (uVar5 & 0x7fffffff)) &&
       (iVar4 = fn_82CFBBF0(param_2,*(undefined4 *)
                                      ((int)((uVar6 + uVar7 + 1 & 0xffffffff) << 2) + iVar4)),
       iVar4 == 0)) break;
    uVar6 = (ulonglong)(uint)param_1[2];
    iVar4 = *param_1;
    uVar7 = uVar7 + 1 & uVar6;
    uVar3 = *(uint *)((int)(uVar7 << 2) + iVar4);
  }
  return uVar7;
}

