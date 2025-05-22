#!/bin/bash

# Create translations directory if it doesn't exist
mkdir -p translations

# List of languages
LANGUAGES=(
    "ar" "ast" "az" "en" "en_US" "it" "ja" "zh_CN" "zh_HK" "zh_TW"
)

# Generate .ts files for each language
for lang in "${LANGUAGES[@]}"; do
    echo "Generating translation file for $lang..."
    lupdate TestAIDemo.pro -ts "translations/TestAIDemo_${lang}.ts"
done

echo "Translation files generation completed!" 