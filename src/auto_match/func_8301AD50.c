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
extern unsigned int *auStack_40;
extern int fn_82FA5190();
extern int fn_83016CE8();
extern int fn_830197E8();
extern unsigned int iStack_50;
extern unsigned int lbl_831BC768;
extern unsigned int uStack_4c;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_8301AD50(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int iStack_50;
  uint uStack_4c;
  undefined4 *puStack_48;
  undefined4 *puStack_44;
  undefined1 auStack_40 [64];
  
  if (*(int *)(param_1 + 0x24) != -1) {
    fn_83016CE8(&iStack_50,param_1 + 0x24);
    uVar4 = uStack_4c;
joined_r0x8301ad80:
    uStack_4c = uVar4;
    if (puStack_48 != (undefined4 *)0x0) {
      while (puStack_48[1] == 0) {
        puVar1 = (undefined4 *)*puStack_48;
        puStack_44 = puStack_48;
        while (puStack_48 = puVar1, puStack_48 == (undefined4 *)0x0) {
          uVar4 = uVar4 + 1;
          if (0xc0 < uVar4) goto joined_r0x8301ad80;
          puStack_44 = (undefined4 *)0x0;
          uStack_4c = uVar4;
          puVar1 = *(undefined4 **)(uVar4 * 4 + iStack_50);
        }
      }
      puVar1 = (undefined4 *)puStack_48[2];
      uVar4 = puVar1[0x17];
      puVar1[0x17] = (int)((ulonglong)uVar4 - 1);
      uVar2 = lbl_831BC768;
      if ((longlong)((ulonglong)uVar4 - 1) < 1) {
        (**(code **)*puVar1)(puVar1,0);
        fn_82FA5190(uVar2,puVar1);
      }
      piVar3 = (int *)fn_830197E8(auStack_40,param_1 + 0x24,&iStack_50);
      iStack_50 = *piVar3;
      uVar4 = piVar3[1];
      puStack_48 = (undefined4 *)piVar3[2];
      puStack_44 = (undefined4 *)piVar3[3];
      goto joined_r0x8301ad80;
    }
  }
  return;
}

