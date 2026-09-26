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
extern int fn_8223C478();
extern int fn_828A12E8();
extern int fn_828B5C88();
extern int fn_828E9DB8();


void fn_828915D8(int param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  int *piVar3;
  int *piVar4;
  
  fn_828B5C88(param_1 + 0x80,*(undefined4 *)(param_1 + 0x6c),param_2);
  cVar1 = *(char *)(param_1 + 0x9d);
  fn_8223C478(param_2,1,0);
  fn_828E9DB8(param_2,cVar1 != '\0',1);
  if (*(char *)(param_1 + 0x9d) != '\0') {
    fn_828A12E8(*(undefined4 *)(param_1 + 0x6c));
    uVar2 = *(undefined1 *)(param_1 + 0x9e);
    fn_8223C478(param_2,8,0);
    fn_828E9DB8(param_2,uVar2,8);
    piVar4 = *(int **)(param_1 + 0x8c);
    if (piVar4 != *(int **)(param_1 + 0x90)) {
      do {
        piVar3 = (int *)*piVar4;
        fn_8223C478(param_2,1,0);
        fn_828E9DB8(param_2,piVar3 != (int *)0x0,1);
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 4))(piVar3,param_2);
        }
        piVar4 = piVar4 + 1;
      } while (piVar4 != *(int **)(param_1 + 0x90));
    }
  }
  return;
}

