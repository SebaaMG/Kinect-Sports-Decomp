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
extern int fn_82231540();
extern int fn_828B6DD0();
extern int fn_828B9180();
extern int fn_82F68B70();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_50;


void fn_828B6300(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  undefined1 uStack_50;
  
  if (*param_1 != 0) {
    iVar1 = fn_82F68B70();
    puVar2 = *(undefined4 **)(iVar1 + 4);
    if (puVar2 != *(undefined4 **)(iVar1 + 8)) {
      dVar4 = (double)lbl_821AAD20;
      do {
        dVar3 = (double)fn_828B9180(*puVar2);
        if (dVar3 <= dVar4) {
          fn_828B6DD0(puVar2 + 2,*(undefined4 *)(iVar1 + 8),puVar2,uStack_50);
          fn_82231540((ulonglong)*(uint *)(iVar1 + 8) - 8,(ulonglong)*(uint *)(iVar1 + 8),
                            iVar1 + 0x10,uStack_50);
          *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + -8;
        }
        else {
          puVar2 = puVar2 + 2;
        }
      } while (puVar2 != *(undefined4 **)(iVar1 + 8));
    }
    return;
  }
  return;
}

