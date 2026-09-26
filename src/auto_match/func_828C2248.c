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
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_828A1958();


undefined4 * fn_828C2248(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 *apuStack_30 [12];
  
  puVar1 = *(undefined4 **)(*(int *)(param_2 + 4) + 4);
  apuStack_30[0] = (undefined4 *)*puVar1;
  while( true ) {
    if (apuStack_30[0] == puVar1) {
      *param_1 = 0;
      param_1[1] = 0;
      return param_1;
    }
    if (*(int *)(apuStack_30[0][10] + 4) == param_3) break;
    fn_828A1958(apuStack_30);
  }
  iVar2 = apuStack_30[0][0xb];
  uVar3 = apuStack_30[0][10];
  *param_1 = 0;
  param_1[1] = 0;
  if (iVar2 == 0) {
    return param_1;
  }
  cVar4 = fn_8223AAC0(iVar2);
  if (cVar4 == '\0') {
    return param_1;
  }
  if (param_1[1] != 0) {
    fn_822315A0();
  }
  param_1[1] = iVar2;
  *param_1 = uVar3;
  return param_1;
}

