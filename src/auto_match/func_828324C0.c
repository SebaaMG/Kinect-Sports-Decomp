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
extern int fn_82820EF8();
extern int fn_82824308();
extern int fn_82824338();
extern int fn_82824378();
extern int fn_828243B8();
extern int fn_828243E8();
extern int fn_82826290();
extern unsigned int iStack0000001c;
extern unsigned int stack0x0000001c;
extern unsigned int stack0x00000024;
extern unsigned int uStack00000024;


undefined8 fn_828324C0(undefined8 param_1,int param_2,uint param_3,int *param_4)

{
  char cVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iStack0000001c;
  uint uStack00000024;
  
  iVar4 = **(int **)(*(int *)(*param_4 + 8) + 0x388) + param_4[1] * 0x20;
  iStack0000001c = param_2;
  uStack00000024 = param_3;
  cVar1 = fn_828243B8(param_2);
  if (cVar1 == '\0') {
    cVar1 = fn_82824378(iStack0000001c);
    if (((cVar1 == '\0') || (uVar2 = (ulonglong)*(uint *)(iStack0000001c + 0x1c), uVar2 == 0)) ||
       (*(int *)(iStack0000001c + 0x18) != 0)) {
      cVar1 = fn_828243E8(iStack0000001c);
      iVar3 = iStack0000001c;
      if (cVar1 == '\0') {
        cVar1 = fn_82824308();
        if ((cVar1 == '\0') && (cVar1 = fn_82824338(iVar3), cVar1 == '\0')) {
          return 1;
        }
        if ((1 < *(uint *)(iVar3 + 0x10)) && (uVar5 = 0, param_4[3] != 0)) {
          do {
            fn_82820EF8((longlong)(int)uVar5 * (longlong)*(int *)(iVar4 + 0x10) +
                         (ulonglong)uStack00000024,*(undefined4 *)(iVar3 + 0x10));
            uVar5 = uVar5 + 1;
          } while (uVar5 < (uint)param_4[3]);
        }
      }
      else if (*(int *)(iStack0000001c + 0x14) == 0) {
        fn_82826290(param_1,&stack0x0000001c,&stack0x00000024,1);
        fn_82820EF8(uStack00000024,*(undefined4 *)(iStack0000001c + 0x10));
      }
    }
    else if (1 < uVar2) {
      uVar5 = 0;
      uVar2 = *(uint *)(iStack0000001c + 0x10) / uVar2;
      iVar3 = iStack0000001c;
      if (param_4[3] != 0) {
        do {
          uVar6 = 0;
          if (uVar2 != 0) {
            do {
              fn_82820EF8((longlong)*(int *)(iVar3 + 0x1c) * (longlong)(int)uVar6 +
                           (longlong)(int)uVar5 * (longlong)*(int *)(iVar4 + 0x10) +
                           (ulonglong)uStack00000024);
              uVar6 = uVar6 + 1;
              iVar3 = iStack0000001c;
            } while (uVar6 < uVar2);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < (uint)param_4[3]);
      }
    }
  }
  else {
    uVar5 = 0;
    if (param_4[3] != 0) {
      do {
        fn_82820EF8((longlong)(int)uVar5 * (longlong)*(int *)(iVar4 + 0x10) +
                     (ulonglong)uStack00000024,*(undefined4 *)(iStack0000001c + 0x10));
        uVar5 = uVar5 + 1;
      } while (uVar5 < (uint)param_4[3]);
    }
  }
  return 0;
}

