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
extern int fn_8289F350();
extern int fn_828ACCE8();
extern int fn_828D2DB8();
extern int fn_828D2EE0();
extern int fn_828D2F28();
extern int fn_828EDEB8();


void fn_828DAB70(int param_1)

{
  char *pcVar1;
  bool bVar2;
  char cVar5;
  ulonglong uVar3;
  int iVar4;
  undefined4 *puVar6;
  
  cVar5 = fn_828ACCE8(*(undefined4 *)(param_1 + 8));
  if (cVar5 == '\0') {
    fn_828D2F28();
  }
  else {
    uVar3 = fn_828D2EE0(param_1);
    puVar6 = *(undefined4 **)(param_1 + 0x18);
    bVar2 = true;
    if (puVar6 != *(undefined4 **)(param_1 + 0x1c)) {
      do {
        if ((*(char *)(puVar6 + 1) == '\0') &&
           ((iVar4 = fn_8289F350(*(undefined4 *)(param_1 + 8),*puVar6), iVar4 == 0 ||
            (10000 < uVar3)))) {
          *(undefined1 *)((int)puVar6 + 5) = 0;
          *(undefined1 *)(puVar6 + 1) = 1;
        }
        pcVar1 = (char *)(puVar6 + 1);
        puVar6 = puVar6 + 2;
        bVar2 = (bool)(*pcVar1 != '\0' & bVar2);
      } while (puVar6 != *(undefined4 **)(param_1 + 0x1c));
    }
    if (bVar2) {
      iVar4 = *(int *)(*(int *)(param_1 + 8) + 0x8c);
      fn_828EDEB8(iVar4,*(undefined8 *)(iVar4 + 0x50));
      fn_828D2DB8(param_1,6);
    }
  }
  return;
}

