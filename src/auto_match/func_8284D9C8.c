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
extern int fn_82817EC0();
extern int fn_82817ED8();
extern int fn_82817EE0();
extern int fn_82817EF8();


undefined8 fn_8284D9C8(int param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  int iVar4;
  undefined8 uVar3;
  char *pcVar5;
  char *pcVar6;
  longlong lVar7;
  char *apcStack_30 [12];
  
  iVar4 = fn_82817EF8(param_2,0xffffffff8201f564);
  if (iVar4 == 0) {
    lVar7 = 0;
    iVar4 = fn_82817ED8(param_2);
    if (0 < iVar4) {
      do {
        fn_82817EE0(param_2,lVar7,apcStack_30);
        pcVar5 = "commandstream";
        pcVar6 = apcStack_30[0];
        do {
          cVar1 = *pcVar6;
          cVar2 = *pcVar5;
          if (cVar1 == '\0') break;
          pcVar6 = pcVar6 + 1;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 == cVar2);
        pcVar6 = apcStack_30[0];
        pcVar5 = "rendergraph";
        if (cVar1 == cVar2) {
          iVar4 = *(int *)(param_1 + 0x120);
LAB_8284da94:
          fn_82817EC0(param_2,lVar7,iVar4);
        }
        else {
          do {
            cVar1 = *pcVar6;
            cVar2 = *pcVar5;
            if (cVar1 == '\0') break;
            pcVar6 = pcVar6 + 1;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 == cVar2);
          iVar4 = param_1;
          if (cVar1 == cVar2) goto LAB_8284da94;
        }
        lVar7 = lVar7 + 1;
        iVar4 = fn_82817ED8(param_2);
      } while ((int)lVar7 < iVar4);
    }
    *(int *)(param_1 + 0x28) = (int)param_2;
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

