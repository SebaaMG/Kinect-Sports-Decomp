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
extern int fn_82284B08();
extern int fn_8228FB60();
extern int fn_8228FC38();
extern int fn_82290070();
extern int fn_82536288();
extern int fn_82F63CA0();


void fn_8228FA78(undefined8 param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *apiStack_40 [16];
  
  if (*(int *)(param_2 + 0x54) == 0) {
    fn_82290070();
  }
  if (*(int *)(param_2 + 0xc) == 0) {
    puVar3 = *(undefined4 **)(param_2 + 0x38);
    if (puVar3 != *(undefined4 **)(param_2 + 0x3c)) {
      puVar2 = puVar3 + 1;
      do {
        apiStack_40[0] = (int *)*puVar3;
        cVar1 = (**(code **)(*apiStack_40[0] + 4))();
        if (cVar1 == '\0') {
          puVar3 = puVar3 + 1;
          puVar2 = puVar2 + 1;
        }
        else {
          fn_82536288(apiStack_40);
          fn_82F63CA0(puVar3,puVar2,(*(int *)(param_2 + 0x3c) - (int)puVar2 >> 2) << 2);
          *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + -4;
        }
      } while (puVar3 != *(undefined4 **)(param_2 + 0x3c));
    }
    fn_8228FB60(param_2);
    fn_8228FC38(param_1,param_2);
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    fn_82284B08(param_1);
  }
  return;
}

