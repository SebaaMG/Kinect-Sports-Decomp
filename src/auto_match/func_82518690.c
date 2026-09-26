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
extern unsigned int *auStack_4c;
extern unsigned int *auStack_60;
extern unsigned int *auStack_7c;
extern unsigned int *auStack_80;
extern int fn_82230040();
extern int fn_825188C8();
extern int fn_825189B8();
extern int fn_82519068();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_44;
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_6c;
extern unsigned int uStack_74;


undefined4 * fn_82518690(int param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_80 [4];
  undefined1 auStack_7c [4];
  undefined **ppuStack_78;
  undefined4 uStack_74;
  undefined **ppuStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_60 [4];
  undefined4 *puStack_5c;
  undefined4 uStack_58;
  uint uStack_50;
  undefined1 auStack_4c [4];
  undefined4 *puStack_48;
  undefined4 uStack_44;
  
  puVar3 = *(undefined4 **)(param_1 + 4);
  if (*(char *)((int)puVar3[1] + 0x21) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x21) == '\0');
  }
  if ((puVar3 == *(undefined4 **)(param_1 + 4)) || (*param_2 < (uint)puVar3[3])) {
    uStack_58 = 0;
    puStack_5c = (undefined4 *)fn_8265C9E0(0x70);
    if (puStack_5c == (undefined4 *)0x0) {
      uStack_6c = 0;
      ppuStack_70 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_70);
    }
    *puStack_5c = puStack_5c;
    puStack_5c[1] = puStack_5c;
    puStack_5c[2] = puStack_5c;
    *(undefined1 *)(puStack_5c + 0x1a) = 1;
    *(undefined1 *)((int)puStack_5c + 0x69) = 1;
    uStack_50 = *param_2;
    uStack_44 = 0;
    puStack_48 = (undefined4 *)fn_8265C9E0(0x70);
    if (puStack_48 == (undefined4 *)0x0) {
      uStack_74 = 0;
      ppuStack_78 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_78);
    }
    *puStack_48 = puStack_48;
    puStack_48[1] = puStack_48;
    puStack_48[2] = puStack_48;
    *(undefined1 *)(puStack_48 + 0x1a) = 1;
    *(undefined1 *)((int)puStack_48 + 0x69) = 1;
    fn_825189B8(auStack_4c,auStack_60);
    puVar3 = (undefined4 *)fn_82519068(auStack_80,param_1,puVar3,&uStack_50);
    puVar3 = (undefined4 *)*puVar3;
    fn_825188C8(auStack_7c,auStack_4c,*puStack_48);
    fn_8265CA20(puStack_48);
    fn_825188C8(auStack_7c,auStack_60,*puStack_5c);
    fn_8265CA20(puStack_5c);
  }
  return puVar3 + 4;
}

