extern int *piRam8323b218;
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
extern int fn_82CE3E48();
extern int fn_82CE5400();
extern int fn_82CE5410();
extern int fn_82CE7968();
extern int fn_82CF9A90();
extern int fn_82CFA3B0();
extern unsigned int lbl_82132B84;
extern unsigned int lbl_8323B21C;
extern unsigned int lbl_8323B464;
extern unsigned int lbl_8323B4A4;


undefined8 fn_82CE7B00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 *puVar2;

  if (lbl_8323B21C == '\0') {
    fn_82CE5400();
    fn_82CF9A90();
    iVar1 = fn_82CE5410();
    puVar2 = (undefined4 *)(**(code **)(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),8);
    *puVar2 = &lbl_82132B84;
    *(undefined2 *)(puVar2 + 1) = 8;
    *(undefined2 *)((int)puVar2 + 6) = 1;
    if (lbl_8323B4A4 != (undefined4 *)0x0) {
      fn_82CE3E48();
    }
    lbl_8323B4A4 = puVar2;
    iVar1 = fn_82CE5410();
    iVar1 = (**(code **)(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),0x28);
    *(undefined2 *)(iVar1 + 4) = 0x28;
    iVar1 = fn_82CFA3B0(iVar1,param_2,param_3);
    if (lbl_8323B464 != 0) {
      fn_82CE3E48();
    }
    lbl_8323B464 = iVar1;
    fn_82CE7968();
    (**(code **)(*piRam8323b218 + 0xc))();
    lbl_8323B21C = '\x01';
  }
  return 0;
}
