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
extern int fn_828F4C10();
extern int fn_828F4E08();
extern int fn_828F6790();
extern int fn_828F6890();
extern int fn_828FAB00();
extern int fn_828FAF58();
extern int fn_828FBB60();


undefined8 fn_828F7470(int param_1)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int *piVar7;
  
  piVar7 = (int *)(param_1 + 0x280);
  uVar3 = fn_828FBB60(*(undefined4 *)(param_1 + 0x278),*(undefined4 *)(param_1 + 0x2a0),piVar7
                           );
  if (-1 < (int)uVar3) {
    if (*piVar7 == 9) {
      pcVar6 = *(char **)(param_1 + 0x288);
      *(undefined4 *)(param_1 + 0x48) = 1;
      pcVar4 = "pack_matrix";
      pcVar5 = pcVar6;
      do {
        cVar1 = *pcVar5;
        cVar2 = *pcVar4;
        if (cVar1 == '\0') break;
        pcVar5 = pcVar5 + 1;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        uVar3 = fn_828F4C10(param_1);
        return uVar3;
      }
      pcVar4 = "warning";
      pcVar5 = pcVar6;
      do {
        cVar1 = *pcVar5;
        cVar2 = *pcVar4;
        if (cVar1 == '\0') break;
        pcVar5 = pcVar5 + 1;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        uVar3 = fn_828F4E08(param_1);
        return uVar3;
      }
      pcVar4 = "def";
      pcVar5 = pcVar6;
      do {
        cVar1 = *pcVar5;
        cVar2 = *pcVar4;
        if (cVar1 == '\0') break;
        pcVar5 = pcVar5 + 1;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        uVar3 = fn_828F6890(param_1);
        return uVar3;
      }
      pcVar5 = "ruledisable";
      do {
        cVar1 = *pcVar6;
        cVar2 = *pcVar5;
        if (cVar1 == '\0') break;
        pcVar6 = pcVar6 + 1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        uVar3 = fn_828F6790(param_1);
        return uVar3;
      }
      fn_828FAB00(param_1 + 0x18,piVar7,0xdf0,0xffffffff82029494);
      *(undefined4 *)(param_1 + 0x29c) = 0;
    }
    if ((*piVar7 != 0xc) && (*piVar7 != 0xd)) {
      fn_828FAF58(*(undefined4 *)(param_1 + 0x278),0);
    }
    uVar3 = 0;
  }
  *(undefined4 *)(param_1 + 0x4c) = 1;
  return uVar3;
}

