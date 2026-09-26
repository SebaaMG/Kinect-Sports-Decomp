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
extern int fn_82BE5240();
extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();
extern int fn_82F65AC0();


undefined8 fn_82BE1C80(int param_1,char *param_2)

{
  int iVar2;
  undefined8 uVar1;
  int iVar3;
  
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    fn_82BE5240(param_1,300,0xffffffff82196582);
  }
  else {
    iVar3 = param_1 + 0x170;
    fn_82BE5340(iVar3);
    while (*(int *)(param_1 + 0x178) != 0) {
      iVar2 = fn_82BE5378(iVar3);
      iVar2 = fn_82F65AC0(param_2,*(undefined4 *)(iVar2 + 0x38));
      if (iVar2 == 0) {
        uVar1 = fn_82BE5378(iVar3);
        return uVar1;
      }
      fn_82BE5350();
    }
  }
  return 0;
}

