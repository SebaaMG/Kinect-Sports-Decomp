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
extern unsigned int *auStack_30;
extern int fn_82C07C18();
extern int fn_82C10F40();
extern int fn_82C10F68();
extern int fn_82C10FD0();
extern int fn_82C11038();
extern int fn_82C12128();
extern unsigned int uStack_28;


undefined8 fn_82C08D70(int param_1)

{
  int iVar2;
  undefined8 uVar1;
  undefined1 auStack_30 [4];
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined4 *apuStack_24 [3];
  
  uStack_28 = 0;
  puStack_2c = (undefined1 *)0x0;
  auStack_30[0] = 0;
  apuStack_24[0] = (undefined4 *)0x0;
  if (param_1 == 0) {
    return 4;
  }
  iVar2 = fn_82C10F68(*(undefined4 *)(param_1 + 0x238),&uStack_28,&puStack_2c,auStack_30);
  if (iVar2 != -0x7fafffea) {
    if (iVar2 < 0) goto LAB_82c08e50;
    do {
      if ((iVar2 < 0) ||
         (((*(int *)(puStack_2c + 4) == 1 && (*(int *)(puStack_2c + 0x20) == 2)) &&
          ((iVar2 = fn_82C10F40(*(undefined4 *)(param_1 + 0x23c),*puStack_2c,apuStack_24),
           iVar2 < 0 || (iVar2 = fn_82C12128(*apuStack_24[0]), iVar2 < 0))))))
      goto LAB_82c08e50;
      iVar2 = fn_82C10FD0(*(undefined4 *)(param_1 + 0x238),uStack_28,&puStack_2c,auStack_30);
    } while (iVar2 != -0x7fafffea);
  }
  fn_82C11038(*(undefined4 *)(param_1 + 0x238),uStack_28);
LAB_82c08e50:
  uVar1 = fn_82C07C18();
  return uVar1;
}

