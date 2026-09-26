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
extern int fn_82F6E1C8();
extern int fn_82F71A70();
extern int fn_82F71B90();
extern int fn_82F71CD0();
extern int fn_82F85E30();
extern int fn_82F86178();
extern int fn_82F8619C();
extern unsigned int lbl_8329F60C;
extern unsigned int lbl_8329F620;
extern unsigned int uStack_60;


ulonglong fn_82F85F60(void)

{
  int iVar2;
  ulonglong uVar1;
  int iVar3;
  undefined4 *puVar4;
  uint uStack_60;
  
  uStack_60 = 0xffffffff;
  iVar2 = fn_82F71B90(0xb);
  if (iVar2 == 0) {
    uVar1 = 0xffffffffffffffff;
  }
  else {
    fn_82F71CD0(0xb);
    for (iVar2 = 0; iVar2 < 0x40; iVar2 = iVar2 + 1) {
      puVar4 = (undefined4 *)(&lbl_8329F620)[iVar2];
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)fn_82F6E1C8(0x20,0x48);
        if (puVar4 != (undefined4 *)0x0) {
          (&lbl_8329F620)[iVar2] = puVar4;
          lbl_8329F60C = lbl_8329F60C + 0x20;
          for (; puVar4 < (undefined4 *)((&lbl_8329F620)[iVar2] + 0x900); puVar4 = puVar4 + 0x12) {
            *(undefined1 *)(puVar4 + 1) = 0;
            *puVar4 = 0xffffffff;
            *(undefined1 *)((int)puVar4 + 5) = 10;
            puVar4[2] = 0;
          }
          uStack_60 = iVar2 << 5;
          *(undefined1 *)((&lbl_8329F620)[(int)uStack_60 >> 5] + 4) = 1;
          iVar2 = fn_82F85E30();
          if (iVar2 == 0) {
            uStack_60 = 0xffffffff;
          }
        }
        break;
      }
      for (; puVar4 < (undefined4 *)((&lbl_8329F620)[iVar2] + 0x900); puVar4 = puVar4 + 0x12) {
        if ((*(byte *)(puVar4 + 1) & 1) == 0) {
          if (puVar4[2] == 0) {
            fn_82F71CD0(10);
            if ((puVar4[2] == 0) && (iVar3 = fn_82F71A70(puVar4 + 3,4000), iVar3 != 0)) {
              puVar4[2] = puVar4[2] + 1;
            }
            fn_82F8619C();
          }
          RtlEnterCriticalSection(puVar4 + 3);
          if ((*(byte *)(puVar4 + 1) & 1) == 0) {
            *(undefined1 *)(puVar4 + 1) = 1;
            *puVar4 = 0xffffffff;
            uStack_60 = ((int)puVar4 - (&lbl_8329F620)[iVar2]) / 0x48 + iVar2 * 0x20;
            break;
          }
          RtlLeaveCriticalSection(puVar4 + 3);
        }
      }
      if (uStack_60 != 0xffffffff) break;
    }
    fn_82F86178();
    uVar1 = (ulonglong)uStack_60;
  }
  return uVar1;
}

