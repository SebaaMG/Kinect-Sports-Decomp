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
extern int fn_82267628();
extern int fn_82A1DD38();


void fn_82267218(int param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  
  iVar6 = *(int *)(param_1 + 0x5d8);
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x478)) {
    iVar7 = iVar6 * 0x48;
    lVar5 = 0;
    puVar8 = (undefined4 *)(param_1 + 0xd4);
    do {
      if (iVar6 < *(int *)(param_1 + 0x474)) {
        puVar8[-1] = *(undefined4 *)(*(int *)(param_1 + 0x470) + iVar7 + 0x40);
        *puVar8 = *(undefined4 *)(*(int *)(param_1 + 0x470) + iVar7 + 0x44);
        if ((ulonglong)*(uint *)(param_1 + 0x5dc) != 0) {
          fn_82A1DD38(puVar8 + -0xc,lVar5 + (ulonglong)*(uint *)(param_1 + 0x5dc),0x24);
        }
        pcVar3 = (char *)(puVar8 + -0x35);
        pcVar2 = (char *)(*(int *)(param_1 + 0x470) + iVar7 + -1);
        do {
          if (puVar8 + -0x25 <= pcVar3) break;
          pcVar2 = pcVar2 + 1;
          cVar1 = *pcVar2;
          *pcVar3 = cVar1;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        if (pcVar3 == (char *)(puVar8 + -0x25)) {
          pcVar3[-1] = '\0';
        }
        fn_82267628(*(undefined4 *)(param_1 + 0x5c0));
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 0x24;
      puVar8 = puVar8 + 0x38;
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0x48;
    } while (iVar4 < *(int *)(param_1 + 0x478));
  }
  return;
}

