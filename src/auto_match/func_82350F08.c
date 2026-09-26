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
extern int fn_82250A18();
extern int fn_82517D50();
extern int fn_8265C9E0();
extern int fn_828904D8();
extern int fn_828ACCE8();
extern int fn_828AD740();
extern unsigned int lbl_82197648;
extern unsigned int lbl_82197688;
extern unsigned int lbl_832975B0;


void fn_82350F08(int param_1)

{
  int iVar1;
  char cVar3;
  undefined4 *puVar2;
  
  iVar1 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar1 = fn_82250A18();
  }
  if (*(char *)(iVar1 + 4) != '\0') {
    cVar3 = fn_828ACCE8(*(undefined4 *)(param_1 + 0x3fc));
    if ((cVar3 == '\0') ||
       (cVar3 = fn_828AD740(*(undefined4 *)(param_1 + 0x3fc)), cVar3 == '\0')) {
      if (*(int *)(param_1 + 0x3f4) == 0) {
        return;
      }
    }
    else {
      if (*(int *)(param_1 + 0x3f4) != 0) {
        return;
      }
      puVar2 = (undefined4 *)fn_8265C9E0(0xa0);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        fn_82517D50(puVar2,*(undefined4 *)(param_1 + 0x3fc),3);
        puVar2[0x20] = param_1;
        *(undefined8 *)(puVar2 + 0x22) = 0;
        *puVar2 = &lbl_82197648;
        puVar2[0x1a] = &lbl_82197688;
        puVar2[0x24] = 0;
        *(undefined1 *)(puVar2 + 0x25) = 1;
        *(undefined1 *)((int)puVar2 + 0x95) = 0;
        *(undefined1 *)((int)puVar2 + 0x96) = 0;
        *(undefined1 *)((int)puVar2 + 0x97) = 0;
        *(undefined1 *)(puVar2 + 0x26) = 0;
      }
      *(undefined4 **)(param_1 + 0x3f4) = puVar2;
      fn_828904D8();
    }
  }
  if (*(int *)(param_1 + 8) != 2) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = 2;
  }
  return;
}

